/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:09:50 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/16 12:53:51 by sopelet          ###   ########.fr       */
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
	This function uses an array of pointers to member functions and a switch statement
	This is a multi-way selection statement that allows a program to execute different
	blocks of code based on the value of an expression
*/
void	Harl::complain(std::string level) {
	std::string	whine[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	long unsigned int	array_len = sizeof(whine) / sizeof(whine[0]);
	void	(Harl::*ptr_complains[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	int	level_index = -1;
    for (long unsigned int i = 0; i < array_len; ++i) {
        if (whine[i] == level) {
            level_index = i;
            break;
        }
    }
	
	switch (level_index) {
		case 0:
			for (long unsigned int i = 0; i < array_len; ++i) {
				std::cout << "[ " << whine[i] << " ]\n";
				(this->*ptr_complains[i])();
			}
			break ;
		case 1:
			for (long unsigned int i = 1; i < array_len; ++i) {
				std::cout << "[ " << whine[i] << " ]\n";
				(this->*ptr_complains[i])();
			}
			break ;
		case 2:
			for (long unsigned int i = 2; i < array_len; ++i) {
				std::cout << "[ " << whine[i] << " ]\n";
				(this->*ptr_complains[i])();
			}
			break ;
		case 3:
			for (long unsigned int i = 0; i < array_len; ++i) {
				std::cout << "[ " << whine[i] << " ]\n";
				(this->*ptr_complains[i])();
			}
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
	}
}