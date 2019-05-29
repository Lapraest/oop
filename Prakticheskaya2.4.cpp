#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0,"");
	float a, x, y, t;
	cin >> a >> x;
	if (x >= a) { y = a + log(x + a); }
	if (x < a) { y = sqrt(sin(a*x)); }
	if (y < a) { t = y / (a - x); }
	if (y == a) { t = (y / (a - x)) + ((a + x) / (y*y)); }
	if (y > a) { t = tan(a*x) + cos(2 * a*y); }
	if ((isnan(y)) || (isnan(t))) {
		cout << "Ошибка в вычислениях" << endl;
	}
	else { cout << "a=" << a << endl << "x=" << x << endl << "y=" << y << endl << "t=" << t << endl; }
}
