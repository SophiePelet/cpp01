/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:21:36 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/16 11:22:03 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class	Harl {
	public:

	Harl();
	~Harl();

	void	complain(std::string level);

	private:

	void	debug();
	void	info();
	void	warning();
	void	error();
};

#endif