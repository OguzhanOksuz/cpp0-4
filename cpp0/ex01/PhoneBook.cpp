/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:36:34 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/06 12:36:01 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	this->counter = 0;
	std::cout << "Enter 'ADD' to add a contact" << std::endl;
	std::cout << "Enter 'SEARCH' to search on contacts" << std::endl;
	std::cout << "Enter 'EXIT' to close phonebook" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "* PhoneBook Has Been Closed *" << std::endl;
}

void	PhoneBook::add(void)
{
	std::string	line;

	if (this->counter > 7)
		std::cout << "Overwriting!" << std::endl;
	std::cout << "Enter the first name : ";
	std::getline(std::cin, line);
	this->contacts[this->counter % 8].set_firstname(line);

	std::cout << "Enter the last name : ";
	std::getline(std::cin, line);
	this->contacts[this->counter % 8].set_lastname(line);

	std::cout << "Enter the nickname : ";
	std::getline(std::cin, line);
	this->contacts[this->counter % 8].set_nickname(line);

	std::cout << "Enter the phone number: ";
	std::getline(std::cin, line);
	this->contacts[this->counter % 8].set_phonenumber(line);

	std::cout << "Enter the darkest secret : ";
	std::getline(std::cin, line);
	this->contacts[this->counter % 8].set_darkestsecret(line);

	this->counter++;
}

void	PhoneBook::search(void)
{
	std::string	prompt;

	std::cout << "|---------------MY PHONEBOOK----------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (char c = '1'; c <= '8'; c++)
	{
		std::cout << "|         " << c;
		std::cout << "|" << this->format(this->contacts[c - '1'].get_firstname());
		std::cout << "|" << this->format(this->contacts[c - '1'].get_lastname());
		std::cout << "|" << this->format(this->contacts[c - '1'].get_nickname());
		std::cout << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	std::cout << "Enter the index of the entry to display" << std::endl;
	std::cout << "Enter 0 to return back to the phonebook" << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, prompt);
		if (prompt == "1" || prompt == "2" || prompt == "3" || prompt == "4" ||  prompt == "5" || prompt == "6" || prompt == "7" ||  prompt == "8")
		{
			std::cout << "Index = " << prompt << std::endl;
			std::cout << "First name = " << this->contacts[prompt[0] - '1'].get_firstname() << std::endl;
			std::cout << "Last name = " << this->contacts[prompt[0] - '1'].get_lastname() << std::endl;
			std::cout << "Nickname = " << this->contacts[prompt[0] - '1'].get_nickname() << std::endl;
			std::cout << "Phonenumber = " << this->contacts[prompt[0] - '1'].get_phonenumber() << std::endl;
			std::cout << "Darkest secret = " << this->contacts[prompt[0] - '1'].get_darkestsecret() << std::endl;
			break ;
		}
		else if (prompt == "0")
			break ;
		else
			std::cout << "Wrong index" << std::endl;
	}

}

std::string PhoneBook::format(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	else if (str.size() < 10)
	{
		while (str.size() != 10)
		{
			str.insert(0, " ");
		}
	}
	return (str);
}
