/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:58:02 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/06 20:16:08 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{

	if (ac == 4)
	{
		std::ifstream inputFile(av[1]);
		if (!inputFile)
		{
			std::cout << "Input file error!" << std::endl;
			return (1);
		}
		else
		{
			std::ofstream outputFile(std::string(av[1]) + ".replace");
			if (!outputFile)
			{
				std::cout << "Output file error!" << std::endl;
				return (1);
			}
			else
			{
				std::string	str;
				int		pos;
				unsigned long	i;
				char		c;

				while (!inputFile.eof() && inputFile >> std::noskipws >> c)
					str += c;
				inputFile.close();
				i = 0;
				while (i < str.size())
				{	
					pos = str.find(av[2], i);
					if (pos != -1 && pos == (int)i)
					{
						outputFile << av[3];
						i += std::string(av[2]).size() - 1;
					}

					else
						outputFile << str[i];
					i++;
				}
				outputFile.close();
				return (0);
			}
		}
	}
	else
	{
		std::cout << "Wrong arguman count!" << std::endl;
		return (1);
	}
	return (0);
}
