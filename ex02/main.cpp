/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:40:23 by adoireau          #+#    #+#             */
/*   Updated: 2025/07/03 16:12:32 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::cout << "\n=== Testing FragTrap ===" << std::endl;
	FragTrap fragTrap("Second");
	fragTrap.attack("Enemy");
	fragTrap.takeDamage(5);
	fragTrap.beRepaired(2);
	fragTrap.highFivesGuy();
	for (int i = 0; i < 3; i++)
		fragTrap.attack("Enemy");

	std::cout << "\n=== Testing FragTrap copy ===" << std::endl;
	FragTrap fragTrapCopy(fragTrap);
	fragTrapCopy.attack("CopyEnemy");
	fragTrapCopy.takeDamage(50);
	fragTrapCopy.takeDamage(50);
	fragTrapCopy.attack("CopyEnemy");
	fragTrapCopy.highFivesGuy();

	return 0;
}
