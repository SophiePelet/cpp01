/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:22:07 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/11 11:45:31 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Constructor function
	- Initializes the `name` of the Zombie object when it's created
	- Could also use `this` pointer but initialization lists are better
	- Principle: When creating a Zombie, it initializes its member variable name 
	- using the given parameter name, without doing any assignment inside the constructor body
*/
Zombie::Zombie(std::string name) : name(name) {
}

/*
	Destructor function
*/
Zombie::~Zombie() {
	std::cout << name << ": has died :(\n";
}

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}