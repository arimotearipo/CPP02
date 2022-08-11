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

bool	Fixed::operator>(const Fixed &right) const
{
	return (this->getRawBits() > right.getRawBits());
}

bool	Fixed::operator<(const Fixed &right) const
{
	return (this->getRawBits() < right.getRawBits());
}

bool	Fixed::operator>=(const Fixed &right) const
{
	return (this->getRawBits() >= right.getRawBits());
}

bool	Fixed::operator<=(const Fixed &right) const
{
	return (this->getRawBits() <= right.getRawBits());
}

bool	Fixed::operator==(const Fixed &right) const
{
	return (this->getRawBits() == right.getRawBits());
}

bool	Fixed::operator!=(const Fixed &right) const
{
	return (this->getRawBits() != right.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &right) const
{
	Fixed newfixed(*this);
	newfixed.setRawBits(this->getRawBits() + right.getRawBits());
	return (newfixed);
}

Fixed	Fixed::operator-(const Fixed &right) const
{
	Fixed newfixed(*this);
	newfixed.setRawBits(this->getRawBits() - right.getRawBits());
	return (newfixed);
}

Fixed	Fixed::operator*(const Fixed &right) const
{
	Fixed newfixed(*this);
	newfixed.setRawBits(this->toFloat() * right.toFloat());
	return (newfixed);
}

Fixed	Fixed::operator/(const Fixed &right) const
{
	Fixed newfixed(*this);
	newfixed.setRawBits(this->toFloat() / right.toFloat());
	return (newfixed);
}

// Increment

Fixed	&Fixed::operator++(void)
{
	(this->fpnv)++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	(this->fpnv)--;
	return (*this);
}

Fixed	Fixed::operator++(int n)
{
	if (n >= 0)
	{
		for (int i = 0; i <= n; i++)
			(this->fpnv)++;
	}
	else
	{
		for (int i = 0; i <= (n * -1); i++)
			(this->fpnv)--;
	}
	return (*this);
}

Fixed	Fixed::operator--(int n)
{
	if (n >= 0)
	{
		for (int i = 0; i <= n; i++)
			(this->fpnv)--;
	}
	else
	{
		for (int i = 0; i <= (n * -1); i++)
			(this->fpnv)++;
	}
	return (*this);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed2);
	else
		return (fixed1);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed1);
	else
		return (fixed2);
}

const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed2);
	else
		return (fixed1);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed2);
	else
		return (fixed1);
}