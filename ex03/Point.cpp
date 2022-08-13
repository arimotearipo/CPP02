#include "Point.hpp"

using std::cout;
using std::endl;

Point::Point(void) : _x(0), _y(0)
{
	// cout << "New Point object instantiated" << endl;
}

Point::Point(float const a, float const b) : _x(a), _y(b)
{
	// cout << "New Point object instantiated with parameters" << endl;
}

Point::Point(Point const &copypoint) : _x(copypoint.getX()), _y(copypoint.getY())
{

}

Point::~Point(void)
{
	// cout << "A Point object is deconstructed" << endl;
}

Point	&Point::operator=(Point const &toassign)
{
	// cout << "Member attributes are const" << endl;
	return (*this);
}

Fixed const &Point::getX(void) const
{
	return (this->_x);
}

Fixed const &Point::getY(void) const
{
	return (this->_y);
}