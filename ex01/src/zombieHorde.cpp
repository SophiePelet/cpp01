/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:01:05 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/22 16:52:06 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie*	horde;

	if (N == 0) {
		std::cout << "Cannot create an empty horde\n";
		return (0);
	}
	if (N < 0) {
		std::cout << "Cannot create a negative number of zombie\n";
		return (0);
	}
	horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	
	return (horde);
}