/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 00:43:42 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/07 01:36:05 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &ref) : x(ref.x), y(ref.y)
{
	*this = ref;
}

Point::~Point()
{
}

Point&	Point::operator=(const Point &ref)
{
	if (this != &ref)
	{
		(Fixed)this->x = ref.getX();
		(Fixed)this->y = ref.getY();
	}
	return (*this);
}

Fixed Point::getX(void) const
{
	return this->x;
}

Fixed Point::getY(void) const
{
	return this->y;
}
