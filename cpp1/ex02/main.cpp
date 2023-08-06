/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:58:02 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/06 16:38:47 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string;
	std::string*	stringPTR;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "string address    : " << &string << std::endl;
	std::cout << "stringPTR address : " << stringPTR << std::endl;
	std::cout << "stringREF address : " << &stringREF << std::endl;

	std::cout << "" << std::endl;

	std::cout << "string           : " << string << std::endl;
	std::cout << "stringPTR string : " << *stringPTR << std::endl;
	std::cout << "stringREF string : " << stringREF << std::endl;
}
