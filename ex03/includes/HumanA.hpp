/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:34:42 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/23 10:51:54 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
	public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack();
	
	private:

	std::string	_name;
	Weapon 		&_weapon;
};

#endif