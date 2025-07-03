/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:40:19 by adoireau          #+#    #+#             */
/*   Updated: 2025/07/03 16:02:46 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "ClapTrap " << this->_name << " created by copy" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		isDead("ClapTrap");
	else if (this->_energyPoints <= 0)
		noEnergy("ClapTrap");
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		isDead("ClapTrap");
	else {
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
			isDead("ClapTrap");
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		isDead("ClapTrap");
	else if (this->_energyPoints <= 0)
		noEnergy("ClapTrap");
	else
	{
		std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
}
void ClapTrap::isDead(std::string type)
{
	std::cout << type << " " << this->_name << " is dead!" << std::endl;
}

void ClapTrap::noEnergy(std::string type)
{
	std::cout << type << " " << this->_name << " has no energy!" << std::endl;
}
