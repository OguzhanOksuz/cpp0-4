/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:24:19 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/06 00:12:18 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	Contact();
	~Contact();
	void	set_firstname(std::string line);
	void	set_lastname(std::string line);
	void	set_nickname(std::string line);
	void	set_phonenumber(std::string line);
	void	set_darkestsecret(std::string line);
	std::string	get_firstname(void);
	std::string	get_lastname(void);
	std::string	get_nickname(void);
	std::string	get_phonenumber(void);
	std::string	get_darkestsecret(void);
};

#endif
