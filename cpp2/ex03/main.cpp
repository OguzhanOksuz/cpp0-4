/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:49:30 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/07 01:34:32 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	if (bsp(Point(-5.0f, 0.0f), Point(5.0f, 0.0f), Point(0.0f, 5.0f), Point(0.0f, 3.0f)))
		std::cout << "Point is in the area" << std::endl;
	else
		std::cout << "Point is not in the area" << std::endl;

	if (bsp(Point(-5.0f, 0.0f), Point(5.0f, 0.0f), Point(0.0f, 5.0f), Point(0.0f, 6.0f)))
		std::cout << "Point is in the area" << std::endl;
	else
		std::cout << "Point is not in the area" << std::endl;

	return 0;
}
