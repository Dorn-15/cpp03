/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 19:43:25 by adoireau          #+#    #+#             */
/*   Updated: 2025/07/03 17:11:25 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << this->_name << " created by copy" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuy()
{
	if (this->_hitPoints <= 0)
		isDead("FragTrap");
	else if (this->_energyPoints <= 0)
		noEnergy("FragTrap");
	else
	{
		std::cout << "FragTrap " << this->_name << " high-fives" << std::endl;
		this->_energyPoints--;
	}
}
