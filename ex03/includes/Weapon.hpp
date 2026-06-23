/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:34:47 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/23 16:47:01 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon {
	public:

	Weapon(std::string type);
	~Weapon();

	const std::string&	getType() const;
	void				setType(std::string type);

	private:

	std::string	_type;
};

#endif