/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:01:05 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/22 17:58:09 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie*	horde;

	if (N == 0) {
		std::cout << "Cannot create an empty horde\n";
		return (NULL);
	}
	if (N < 0) {
		std::cout << "Cannot create a negative number of zombie\n";
		return (NULL);
	}

	horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	
	return (horde);
}