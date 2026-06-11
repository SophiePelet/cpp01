/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:01:26 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/11 14:24:29 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

/*------------------------------- Zombie class -------------------------------*/

class	Zombie {
	public:

	Zombie();
	~Zombie();

	void		announce();
	void		setName(std::string name);

	private:

	std::string _name;

};

/*-------------------------------- Functions --------------------------------*/

Zombie*	zombieHorde(int N, std::string name);

#endif