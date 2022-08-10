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
	this->fpnv = roundf(fpn * (1 << frac_bits));
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
	return ((float)fpnv / (float)(1 << frac_bits));
}

int Fixed::toInt() const
{
	// Basically just typecasting it to int
	return (int)this->toFloat();
}

ostream	&operator<<(ostream &COUT, Fixed const &FIXED)
{
	COUT << FIXED.toFloat();
	return (COUT);
}