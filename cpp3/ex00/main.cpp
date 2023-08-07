/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:47:36 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/07 10:30:54 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap ct1("clap");
	ct1.attack("trap");
	ct1.takeDamage(11);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
}
