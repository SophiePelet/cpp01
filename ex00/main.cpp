/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:20:25 by sopelet           #+#    #+#             */
/*   Updated: 2026/06/22 17:33:42 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie  *heap_zombie;

    heap_zombie = newZombie("HeapZombie");
    heap_zombie->announce();
    randomChump("StackZombie");
    
    delete heap_zombie;
    return (0);
}