#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	float a, b, t,z;
	cin >> a >> b; 
	if (a >= b) { z = 1 - 2 * sin(b)*cos(a); }
	if (a < b) { z = sqrt(abs(a*a - b * b)); }
	if (z < b) { t = pow(z + a * a*b, 1.0 / 3.0); }
	if (z == b) { t = 1 - log(z) + cos(a*a*b); }
	if (z > b) { t = 1 / cos(z*a); }
	cout << "a=" << a << endl << "b=" << b << endl << "z=" << z << endl << "t=" << t << endl;;
}
