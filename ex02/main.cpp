/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:15:49 by nfernand          #+#    #+#             */
/*   Updated: 2022/09/12 11:43:06 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int	main()
{
	//Fixed 	const b(10);

	//Fixed	a(0);
	//cout << endl;
	//cout << "a is " << a << endl;
	//cout << "a is " << ++a << endl;
	//cout << "a is " << a << endl;
	//cout << "a is " << a++ << endl;
	//cout << "a is " << a << endl << endl;

	//Fixed b(Fixed(5.05f) * Fixed(2));

	//cout << "b is " << b << endl << endl;
	//cout << "b is " << b / 2 << endl << endl;

	cout << BBLU << "Testing * and / operators..." << RESET << endl;
	Fixed b(10.2f);
	Fixed c(2);
	cout << "b is " << b << endl;
	cout << "c is " << c << endl;
	cout << "b * c is " << (b * c) << endl;
	cout << "b / c is " << b / c << endl << endl;

	cout << BBLU << "Testing + and - operators..." << RESET << endl;
	Fixed d(10.2f);
	Fixed e(1);
	cout << "d is " << d << endl;
	cout << "e is " << e << endl;
	cout << "d + e is " << d + e << endl;
	cout << "d - e is " << d - e << endl << endl;

	Fixed f(1);
	Fixed g(2);
	Fixed h(1);
	cout << "f is " << f << endl;
	cout << "g is " << g << endl;
	cout << "h is " << h << endl << endl;

	cout << BBLU "Testing == operator..." RESET << endl;
	cout << "f is ";
	if (f == g)
		cout << "equal ";
	else
		cout << "not equal ";
	cout << "to g" << endl;

	cout << "f is ";
	if (f == h)
		cout << "equal ";
	else
		cout << "not equal ";
	cout << "to h" << endl;
	cout << BBLU "== operator" RESET << endl << endl;

	cout << BBLU "Testing != operator..." RESET << endl;
	cout << "f is ";
	if (f != g)
		cout << "not equal ";
	else
		cout << "equal ";
	cout << "to g" << endl;

	cout << "f is ";
	if (f != h)
		cout << "not equal ";
	else
		cout << "equal ";
	cout << "to h" << endl;
	cout << BBLU "!= operator" RESET << endl << endl;

	cout << BBLU "Testing < operator..." RESET << endl;
	cout << "f is ";
	if (f < g)
		cout << "less then ";
	else
		cout << "not less then ";
	cout << "g" << endl;

	cout << "f is ";
	if (f < h)
		cout << "less then ";
	else
		cout << "not less then ";
	cout << "h" << endl;

	cout << "g is ";
	if (g < h)
		cout << "less then ";
	else
		cout << "not less then ";
	cout << "h" << endl;
	cout << BBLU "< operator" RESET << endl << endl;

	cout << BBLU "Testing > operator..." RESET << endl;
	cout << "f is ";
	if (f > g)
		cout << "more then ";
	else
		cout << "not more then ";
	cout << "g" << endl;

	cout << "f is ";
	if (f > h)
		cout << "more then ";
	else
		cout << "not more then ";
	cout << "h" << endl;

	cout << "g is ";
	if (g > h)
		cout << "more then ";
	else
		cout << "not more then ";
	cout << "h" << endl;
	cout << BBLU "> operator" RESET << endl << endl;

	cout << BBLU "Testing >= operator..." RESET << endl;
	cout << "f is ";
	if (f >= g)
		cout << "more than or equals to ";
	else
		cout << "not more than or equals to ";
	cout << "g" << endl;

	cout << "f is ";
	if (f >= h)
		cout << "more than or equals to ";
	else
		cout << "not more than or equals to ";
	cout << "h" << endl;

	cout << "g is ";
	if (g >= h)
		cout << "more than or equals to ";
	else
		cout << "not more than or equals to";
	cout << "h" << endl;
	cout << BBLU ">= operator" RESET << endl << endl;

	cout << BBLU "Testing <= operator..." RESET << endl;
	cout << "f is ";
	if (f <= g)
		cout << "less than or equals to ";
	else
		cout << "not less than or equals to ";
	cout << "g" << endl;

	cout << "f is ";
	if (f <= h)
		cout << "less than or equals to ";
	else
		cout << "not less than or equals to ";
	cout << "h" << endl;

	cout << "g is ";
	if (g <= h)
		cout << "less than or equals to ";
	else
		cout << "not less than or equals to ";
	cout << "h" << endl;
	cout << BBLU "<= operator" RESET << endl << endl;

	Fixed i(13.2f);
	Fixed j(20.29f);

	cout << "i is " << i << endl;
	cout << "j is " << j << endl;
	cout << "min(i, j) is " << Fixed::min(i, j) << endl;
	cout << "max(i, j) is " << Fixed::max(i, j) << endl;

//	Fixed	b(10.1f);
//	cout << endl;
//	cout << "b is " << b << endl;
//	cout << "b is " << --b << endl;
//	cout << "b is " << b << endl;
//	cout << "b is " << b-- << endl;
//	cout << "b is " << b << endl << endl;
//

	//cout << "a is " << a.toInt() << " as integer" << endl;
	//cout << "b is " << b.toInt() << " as integer" << endl;
	//cout << "c is " << c.toInt() << " as integer" << endl;
	//cout << "d is " << d.toInt() << " as integer" << endl << endl;

	return (0);
}
