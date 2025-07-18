/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:40:23 by adoireau          #+#    #+#             */
/*   Updated: 2025/07/03 15:55:28 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("First");
	clapTrap.attack("Enemy");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(2);
	for (int i = 0; i < 8; i++)
		clapTrap.attack("Enemy");
	clapTrap.beRepaired(10);
	clapTrap.takeDamage(10);
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(0);
	clapTrap.attack("Enemy");
	return 0;
}
