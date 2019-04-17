#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	float a, b, n, m;
	cin >> a >> b;
	if (a >= b) { n = pow(a - b, 1.0 / 3.0); }
	if (a < b) { n = a * a + ((a - b) / sin(a*b)); }
	if (n < b) { m = (n + a) / b + sqrt(pow(sin(a), 2) - cos(n)); }
	if (n == b) { m = pow(b, 2) + tan(n*a); }
	if (n > b) { m = pow(b, 3) + n * pow(a, 2); }
	cout << "a=" << a << endl << "b=" << b << endl << "n=" << n << endl << "m=" << m << endl;;
}
