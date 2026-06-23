/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:29:18 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/23 11:30:59 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	harl;

	std::cout << "[ DEBUG ]\n";
	harl.complain("DEBUG");
	std::cout << "[ Info ]\n";
	harl.complain("INFO");
	std::cout << "[ WARNING ]\n";
	harl.complain("WARNING");
	std::cout << "[ ERROR ]\n";
	harl.complain("ERROR");
	harl.complain("UNKNOWN");
	
	return (0);
}