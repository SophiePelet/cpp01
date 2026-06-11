/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:22:18 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/10 18:45:04 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Uses `new` to create a Zombie on the heap (dynamic lifetime)
	The zombie can be used outside of the function scope
	Caller is responsible for delete
*/
Zombie* newZombie(std::string name) {
	Zombie *new_zombie;

	new_zombie = new Zombie(name);
	return (new_zombie);
}