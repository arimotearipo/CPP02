#include <iostream>
#include "Fixed.hpp"

using std::string;
using std::cout;
using std::endl;

Fixed::Fixed(void) : fpnv(0)
{
	cout << "Constructor called" << endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	cout << "Object copied" << endl;
	*this = fixed;
}

Fixed::~Fixed(void)
{
	cout << "Object deconstructed" << endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	cout << "Object assigned" << endl;
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