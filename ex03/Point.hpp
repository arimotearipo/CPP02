#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(float const a, float const b);
		Point(Point const &copypoint); //copy constructor
		~Point(void);
		Point	&operator=(Point const &toassign);

		Fixed const &getX(void) const;
		Fixed const &getY(void) const;
	private:
		Fixed const _x;
		Fixed const _y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif