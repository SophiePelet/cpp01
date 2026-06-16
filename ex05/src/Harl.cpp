/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:21:55 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/16 12:22:17 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
"ketchup burger. I really do!\n";
}

void	Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put "
"enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for "
"years, whereas you started working here just last month.\n";
}

void	Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

/*
	This function uses an array of pointers to member functions and a look up table
	This prevents us from using a bunch of if/else statements
	It iterates through an array of strings and compare its content with `level`
	If there is a match, it calls the corresponding pointer to member function
*/
void	Harl::complain(std::string level) {
	std::string	whine[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*ptr_complains[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	for (long unsigned int i = 0; i < sizeof(whine) / sizeof(whine[0]); ++i) {
		if (whine[i] == level)
			(this->*ptr_complains[i])();
	}
}