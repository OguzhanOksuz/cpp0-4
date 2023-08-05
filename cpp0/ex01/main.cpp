/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:01:47 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/04 19:45:01 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	std::string	prompt;
	PhoneBook	my_phone;

	prompt = "";
	while (prompt != "EXIT")
	{
		if (prompt == "ADD")
		{
			my_phone.add();
		}
		else if (prompt == "SEARCH")
		{
			my_phone.search();
		}
		else if (prompt != "")
		{
			std::cout << "Entered an invalid command" << std::endl;
		}
		std::cout << "command> " << std::flush;
		std::getline(std::cin, prompt);
	}
}
