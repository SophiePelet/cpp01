/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 11:04:37 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/12 15:59:03 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av) {
	int fail;

	if (ac != 4)
	{
		std::cerr << "Wrong number of arguments\n";
		return (1);
	}
	fail = replace(av[1], av[2], av[3]);
	if (!fail)
		return (1);

	return (0);
}
