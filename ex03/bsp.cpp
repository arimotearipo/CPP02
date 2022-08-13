#include "Point.hpp"

using std::cout;
using std::endl;

Fixed gf(Point const a, Point const b, Point const d)
{
	return (d.getX() - a.getX()) * (b.getY() - a.getY()) - (d.getY() - a.getY()) * (b.getX() - a.getX());
}

bool f(Point const a, Point const b, Point const c, Point const d)
{
	return (gf(a, b, c) * gf(a, b, d) > 0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (f(a, b, c, point) && f(b, c, a, point) && f(c, a, b, point))
		return (true);
	return (false);
}