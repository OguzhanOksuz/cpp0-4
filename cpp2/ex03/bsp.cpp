/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 00:53:22 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/07 01:31:55 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs(Fixed num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

static Fixed	area(Point const a, Point const b, Point const c)
{	
	return (((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() *(a.getY() - b.getY()))) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abcArea = abs(area(a, b, c));
	Fixed abArea = abs(area(a, b, point));
	Fixed bcArea = abs(area(point, b, c));
	Fixed acArea = abs(area(a, point, c));

	return (abcArea == abArea + bcArea + acArea);
}
