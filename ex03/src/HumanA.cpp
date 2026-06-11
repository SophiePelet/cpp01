/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:12:55 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/11 17:35:13 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon), _name(name) {
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
