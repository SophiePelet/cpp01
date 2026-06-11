/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:34:44 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/11 17:41:25 by sopelet          ###   ########.fr       */
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
	void	attack();
	
	private:

	Weapon		*_weapon;
	std::string	_name;
};

#endif