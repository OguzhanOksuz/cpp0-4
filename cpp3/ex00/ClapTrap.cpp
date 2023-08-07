/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 02:04:25 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/07 10:35:50 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name(NULL), _hp(10), _ep(10), _ad(0)
{
	std::cout << "Void constractor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "Defalut constractor is called and name is " << name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ref)
{
	this->_name = ref._name;
	this->_hp = ref._hp;
	this->_ep = ref._ep;
	this->_ad = ref._ad;
	std::cout << "Operator constractor is called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Deconstractor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "Assign constractor is called" << std::endl;
	*this = ref;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_ep > 0)
	{
		std::cout << "Claptrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << "has not enough energy point" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		if (this->_hp <= (int)amount)
		{
			std::cout << "ClapTrap " << this->_name << " took [" << amount << "] damage and died!" << std::endl;
			this->_hp -= amount;
		}
		else
		{
			this->_hp -= amount;
			std::cout << "ClapTrap " << this->_name << " took [" << amount << "] damage! Current hp = [" << this->_hp << "]!" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep > 0)
	{
		this->_ep--;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " be reparied [" << amount << "] hit points! Current hp = [" << this->_hp << "]!" << " Current ep = [" << this->_ep << "]!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << "has not enough energy point" << std::endl;
	}
}
