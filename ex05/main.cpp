/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:29:18 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/16 11:45:51 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	harl;
	std::string	level;
	
	while (1) {
		std::cout << "Enter complain level: \n";
		std::cin >> level;
		if (level == "EXIT")
			break ;
		harl.complain(level);
	}
	return (0);
}