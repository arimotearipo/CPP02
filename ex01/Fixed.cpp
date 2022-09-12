#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed(void) : fpnv(0)
{
	cout << "Constructor without argument is called" << endl;
}

Fixed::Fixed(const int in) : fpnv(0)
{
	cout << "The int " << in << " is converted to fixed point value by " << frac_bits << " bits" << endl;
	this->fpnv = in << frac_bits;
}

Fixed::Fixed(float fpn) : fpnv(0)
{
	cout << "The float " << fpn << " is converted to fixed point value by " << frac_bits << " bits" << endl;
	this->fpnv = roundf(fpn * (2 << (this->frac_bits - 1)));
}

Fixed::~Fixed(void)
{
	cout << "The object instance is destructed" << endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	cout << "Instance copied" << endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	cout << "Object instance assigned" << endl;
	if (this != &fixed)
		this->fpnv = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->fpnv);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "The raw bit changed from " << this->fpnv << " to " << raw << endl;
	this->fpnv = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fpnv / (2 << (this->frac_bits - 1)));
}

int Fixed::toInt() const
{
	return (this->fpnv >> this->frac_bits);
}

ostream	&operator<<(ostream &COUT, Fixed const &FIXED)
{
	COUT << FIXED.toFloat();
	return (COUT);
}