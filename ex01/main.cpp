/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:40:23 by adoireau          #+#    #+#             */
/*   Updated: 2025/07/03 16:02:04 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "=== Testing ClapTrap ===" << std::endl;
	ClapTrap clapTrap("First");
	clapTrap.attack("Enemy");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(2);
	for (int i = 0; i < 8; i++)
		clapTrap.attack("Enemy");
	clapTrap.beRepaired(10);
	clapTrap.takeDamage(10);

	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
	ScavTrap scavTrap("Second");
	scavTrap.attack("Enemy");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(2);
	scavTrap.guardGate();
	for (int i = 0; i < 3; i++)
		scavTrap.attack("Enemy");

	std::cout << "\n=== Testing ScavTrap copy ===" << std::endl;
	ScavTrap scavTrapCopy(scavTrap);
	scavTrapCopy.attack("CopyEnemy");
	scavTrapCopy.takeDamage(10);
	scavTrapCopy.takeDamage(100);
	scavTrapCopy.attack("CopyEnemy");
	scavTrapCopy.guardGate();
	std::cout << std::endl;

	return 0;
}
