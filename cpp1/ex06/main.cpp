/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:58:02 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/06 21:24:28 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	else
	{
		Harl	harl;
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int	i;
		int	signal = -1;
		
		i = 0;
		while (i < 4)
		{	
			if (levels[i] == av[1])
				signal = i + 1;
			i++;
		}
		switch(signal)
		{
			case 1:
				harl.complain("DEBUG");
			case 2:
				harl.complain("INFO");
			case 3:
				harl.complain("WARNING");
			case 4:
				harl.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}
