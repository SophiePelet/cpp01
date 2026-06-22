/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:22:07 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/22 17:19:34 by sopelet          ###   ########.fr       */
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
Zombie::Zombie(std::string name) : _name(name) {
}

/*
	Destructor function
*/
Zombie::~Zombie() {
	std::cout << _name << ": has died :(\n";
}

void	Zombie::announce() const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}