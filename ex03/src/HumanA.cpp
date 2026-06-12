/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:12:55 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/12 10:57:25 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

/*
	HumanA always have a weapon and this weapon won't change during his lifetime
	That's why `_weapon` is a reference (can't be NULL and is immutable)
*/
HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon), _name(name) {
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
