#include "Fixed.hpp"
#include <iostream>

int main()
{
	std::cout << 1 << std::endl;
	Fixed a;
	std::cout << 2 << std::endl;
	Fixed b(a);
	std::cout << 3 << std::endl;
	Fixed c;
	std::cout << 4 << std::endl;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "END" << std::endl;

	return 0;
}