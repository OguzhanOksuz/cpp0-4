/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:34:36 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/06 00:16:23 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_firstname(void)
{
	return (this->first_name);
}

std::string Contact::get_lastname(void)
{
	return (this->last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_phonenumber(void)
{
	return (this->phone_number);
}

std::string Contact::get_darkestsecret(void)
{
	return (this->darkest_secret);
}

void Contact::set_firstname(std::string line)
{
	this->first_name = line;
}

void Contact::set_lastname(std::string line)
{
	this->last_name = line;
}

void Contact::set_nickname(std::string line)
{
	this->nickname = line;
}

void Contact::set_phonenumber(std::string line)
{
	this->phone_number = line;
}

void Contact::set_darkestsecret(std::string line)
{
	this->darkest_secret = line;
}
