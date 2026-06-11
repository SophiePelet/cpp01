/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:20:25 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/11 14:03:40 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie  *new_zombie;

    new_zombie = newZombie("Daniel");
    new_zombie->announce();
    randomChump("Loser");
    
    delete new_zombie;
    return (0);
}