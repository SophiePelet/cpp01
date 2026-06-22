/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:21:32 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/22 17:12:56 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

/*------------------------------- Zombie class -------------------------------*/

class	Zombie {
	public:

	Zombie(std::string);
	~Zombie();

	void	announce(void) const;
	
	private:
	std::string	_name;
	
	Zombie(void);
};

/*-------------------------------- Global functions --------------------------------*/

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif