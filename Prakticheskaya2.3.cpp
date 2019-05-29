#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	float a, b, y,t;
	cin >> a >> b; 
	if (b >= a) { y = pow(a - b, 1.0 / 3.0); }
	if (b < a) { y = a * a + ((a - b) / sin(a*b)); }
	if (y < b) { t = (2 * y + sqrt(y*y - a)) / (2 * b - sqrt(a*a - y)); }
	if (y == b) { t = pow(sin(y), 2) + 1 / tan(a - b); }
	if (y > b) { t = pow(y*sin(a), 1.0 / 3.0) + 1 / pow(y*cos(b),1.0/2.0); } 
	if ((isnan(y)) || (isnan(t))) {
		cout << "Ошибка в вычислениях" << endl;
	}
	else { cout << "a=" << a << endl << "b=" << b << endl << "y=" << y << endl << "t=" << t << endl; }
}
