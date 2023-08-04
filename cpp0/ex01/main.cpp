/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:01:47 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/04 18:24:03 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	std::string	prompt;
	PhoneBook	my_phone[8];

	prompt = "";
	std::cout << "* To save a new contact enter 'ADD'" << std::endl;
	std::cout << "* To display a specific contact enter 'SEARCH'" << std::endl;
	std::cout << "* To exit enter 'EXIT'" << std::endl;
	while (prompt.compare("EXIT"))
	{
		if (!prompt.compare("ADD"))
		{
			std::cout << "add" << std::endl;
		}
		else if (!prompt.compare("SEARCH"))
		{
			std::cout << "Search" << std::endl;
		}
		else if (prompt.compare(""))
		{
			std::cout << "Entered an invalid command" << std::endl;
		}
		std::cout << "command> " << std::flush;
		std::getline(std::cin, prompt);
	}
}
