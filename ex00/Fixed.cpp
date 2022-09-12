#include <iostream>
#include "Fixed.hpp"

using std::string;
using std::cout;
using std::endl;

Fixed::Fixed(void) : fpnv(0)
{
	cout << BBLU "[FIXED CLASS CONSTRUCTED]" RESET << endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	cout << BBLU "[FIXED CLASS CONSTRUCTED BY COPY]" RESET << endl;
	*this = fixed;
}

Fixed::~Fixed(void)
{
	cout << BRED "[FIXED CLASS DECONSTRUCTED]" RESET << endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	cout << BBLU "[FIXED CLASS CONSTRUCTED BY ASSIGNMENT]" RESET << endl;
	if (this != &fixed) // This is to just check that the current instance of the object is not the same (as in the same memory address) as the one passed as parameter
		this->fpnv = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->fpnv);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "Fixed-point number value set to " << raw << endl;
	this->fpnv = raw;
}