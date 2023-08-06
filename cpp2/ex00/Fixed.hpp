/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:55:32 by ooksuz            #+#    #+#             */
/*   Updated: 2023/08/06 22:05:50 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int			_value;
		static const int	_fraction;
	public:
		Fixed(void);
		Fixed(Fixed const &ref);
		Fixed &operator=(Fixed const &ref);
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
