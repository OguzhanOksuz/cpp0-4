/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:00:31 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/07 10:31:58 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		std::string	_name;
		int		_hp;
		int		_ep;
		int		_ad;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap &operator=(const ClapTrap &ref);
		ClapTrap(const ClapTrap &ref);
		~ClapTrap();
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
