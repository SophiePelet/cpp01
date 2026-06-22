/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:20:16 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/22 16:53:01 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	*zombie_horde;
	std::string	name = "Titouan";
	int	N = 5;

	zombie_horde = zombieHorde(N, name);
	for (int i = 0; i < N; ++i)
		zombie_horde[i].announce();
	
	delete[] zombie_horde;
	return (0);
}