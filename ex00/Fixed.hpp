#ifndef FIXED_HPP
#define FIXED_HPP

#include "colours.h"

class Fixed
{
	private:
		int	fpnv; //stands for fixed point number value
		static const int frac_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		Fixed &operator=(const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif