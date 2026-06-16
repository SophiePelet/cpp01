/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:21:55 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/16 11:24:39 by sopelet          ###   ########.fr       */
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
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put"
"enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
"years, whereas you started working here just last month.\n";
}

void	Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

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