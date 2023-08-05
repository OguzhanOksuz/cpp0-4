/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:36:34 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/04 19:48:04 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
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


