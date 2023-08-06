/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:37:17 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/06 16:19:12 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie '" << this->_name << "' created" << std::endl;
}

Zombie::Zombie()
{
	std::cout << "A zombie created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie '" << this->_name << "' destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;	
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}
