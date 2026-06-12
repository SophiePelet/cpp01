/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:13:10 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/12 10:56:59 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

HumanB::~HumanB() {
}

/*
	HumanB has a pointer to `_weapon` as he may not always have a weapon
	Pointers can be set to NULL (not references) and they can be changed through
	the lifetime of the human
	This function takes a weapon as a reference as the `main` passes it as 
	an object and not as a pointer
*/
void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

void	HumanB::attack() {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}