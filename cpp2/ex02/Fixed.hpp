/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:55:32 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/07 00:20:53 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int			_value;
		static const int	_fraction = 8;
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(Fixed const &ref);
		Fixed &operator=(Fixed const &ref);
		~Fixed(void);

		float	toFloat(void) const;
		int	toInt(void) const;
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		bool operator>(const Fixed &ref) const;
		bool operator<(const Fixed &ref) const;
		bool operator>=(const Fixed &ref) const;
		bool operator<=(const Fixed &ref) const;
		bool operator==(const Fixed &ref) const;
		bool operator!=(const Fixed &ref) const;

		Fixed operator+(const Fixed &ref) const;
		Fixed operator-(const Fixed &ref) const;
		Fixed operator*(const Fixed &ref) const;
		Fixed operator/(const Fixed &ref) const;

		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		static Fixed& min(Fixed &f1, Fixed &f2);
		static const Fixed& min(const Fixed &f1, const Fixed &f2);
		static Fixed& max(Fixed &f1, Fixed &f2);
		static const Fixed& max(const Fixed &f1, const Fixed &f2);

};

std::ostream &operator<<(std::ostream &output, Fixed const &ref);

#endif
