/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 19:43:25 by adoireau          #+#    #+#             */
/*   Updated: 2025/07/03 17:10:26 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << this->_name << " created by copy" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		isDead("ScavTrap");
	else if (this->_energyPoints <= 0)
		noEnergy("ScavTrap");
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	if (this->_hitPoints <= 0)
		isDead("ScavTrap");
	else if (this->_energyPoints <= 0)
		noEnergy("ScavTrap");
	else
	{
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
		this->_energyPoints--;
	}
}
