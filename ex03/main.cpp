#include "Point.hpp"

using std::cout;
using std::endl;

int main(void)
{
	float a1 = 0, a2 = 0, b1 = 5, b2 = 10, c1 = 10, c2 = 0, p1 = 2.32, p2 = 2.46;

	
	Point const a(a1, a2);
	Point const b(b1, b2);
	Point const c(c1, c2);
	Point const point(p1, p2);
	if (bsp(a, b, c, point))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return 0;
}