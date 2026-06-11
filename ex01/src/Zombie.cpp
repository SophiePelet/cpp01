/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:00:40 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/11 14:24:49 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << _name << ": has died :(\n"; 
}

void	Zombie::setName(std::string name) {
	_name = name;
}

void	Zombie::announce() {
	std::cout << _name << " :BraiiiiiiinnnzzzZ...\n";
}