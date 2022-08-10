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
	private:
		int					fpnv;
		static const int	frac_bits = 8;
};

ostream	&operator<<(ostream &COUT, Fixed const &FIXED);

#endif