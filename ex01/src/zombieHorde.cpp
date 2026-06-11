/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:01:05 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/11 14:13:38 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie*	horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	
	return (horde);
}