/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:15:08 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/11 17:19:54 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	_type = type;
}

Weapon::~Weapon() {
}

std::string	Weapon::getType() {
	return (_type);
}

void	Weapon::setType(std::string type) {
	_type = type;
}