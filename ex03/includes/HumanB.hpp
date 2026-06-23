/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:34:44 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/23 16:47:27 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>

#include "Weapon.hpp"

class	HumanB {
	public:

	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon& weapon);
	void	attack() const;
	
	private:

	std::string	_name;
	Weapon		*_weapon;
};

#endif