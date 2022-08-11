#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

using std::ostream;

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int in); //integer number
		Fixed(const float fpn); //floating point number
		~Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed	&operator=(const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		// Additional for ex02
		bool	operator>(const Fixed &right) const;
		bool	operator<(const Fixed &right) const;
		bool	operator>=(const Fixed &right) const;
		bool	operator<=(const Fixed &right) const;
		bool	operator==(const Fixed &right) const;
		bool	operator!=(const Fixed &right) const;
		Fixed	operator+(const Fixed &right) const;
		Fixed	operator-(const Fixed &right) const;
		Fixed	operator*(const Fixed &right) const;
		Fixed	operator/(const Fixed &right) const;
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int n);
		Fixed	operator--(int n);
		static	Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static	Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static	const Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
		static	const Fixed	&max(const Fixed &fixed1, const Fixed &fixed2);
	private:
		int					fpnv;
		static const int	frac_bits = 8;
};

ostream	&operator<<(ostream &COUT, Fixed const &FIXED);

#endif