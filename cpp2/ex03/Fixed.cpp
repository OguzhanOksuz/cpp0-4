/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:59:19 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/07 00:30:57 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void): _value(0)
{
}

Fixed::Fixed(const int num): _value(num << _fraction)
{
}

Fixed::Fixed(const float num): _value(std::roundf(num * (1 << _fraction)))
{
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(Fixed const &ref)
{
	*this = ref;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	this->_value = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_value) / (1 << _fraction);
}

int	Fixed::toInt(void) const
{
	return (this->_value >> _fraction);
}

std::ostream &operator<<(std::ostream &output, Fixed const &ref)
{
	output << ref.toFloat();
	return (output);
}

bool Fixed::operator>(const Fixed &ref) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool Fixed::operator<(const Fixed &ref) const
{
	return (this->getRawBits() < ref.getRawBits());
}

bool Fixed::operator>=(const Fixed &ref) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool Fixed::operator<=(const Fixed &ref) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool Fixed::operator==(const Fixed &ref) const
{
	return (this->getRawBits() == ref.getRawBits());
}

bool Fixed::operator!=(const Fixed &ref) const
{
	return (this->getRawBits() != ref.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &ref) const
{
	return Fixed(this->toFloat() + ref.toFloat());
}

Fixed	Fixed::operator-(const Fixed &ref) const
{
	return Fixed(this->toFloat() - ref.toFloat());
}

Fixed	Fixed::operator*(const Fixed &ref) const
{
	return Fixed(this->toFloat() * ref.toFloat());
}

Fixed	Fixed::operator/(const Fixed &ref) const
{
	return Fixed(this->toFloat() / ref.toFloat());
}

Fixed& Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._value = this->_value++;
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._value = this->_value--;
	return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() <= b.getRawBits())
			return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() >= b.getRawBits())
			return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}
