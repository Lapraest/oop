#include "pch.h"
#include <iostream>
using namespace std;
int add(int a, int b) {
	return a + b;
}
double addd(double a, double b) {
	return a + b;
}
int substract(int a, int b) {
	return a - b;
}
double substractd(double a, double b) {
	return a - b;
}
int multiply(int a, int b) {
	return a * b;
}
double multiplyd(double a, double b) {
	return a * b;
}
int divide(int a, int b) {
	if (!b) return NULL;
	else return float(a) / b;
}
double divided(double a, double b) {
	if (!b) return NULL;
	else return a / b;
}
int main()
{
	setlocale(0, "");
	int a, b, x, y;
	double c, d;
	cout << "С какими числами мне сегодня работать? С целыми или дробными?(1/0)" << endl;
	cin >> x;
	cout << "Введите пожалуйста эти чмсла." << endl;
	if (x = 1) { cin >> a >> b; }
	else { cin >> c >> d; }
	cout << endl << "Какое действие мне выполнить с числами?" << endl << "Сложение, вычитание, умножение или деление?(1/2/3/4)" << endl;
	cin >> y;
	cout << "Получилось:" << endl;
	if (y == 1) { if (x == 1)cout << add(a, b) << endl; else cout << addd(c, d) << endl; }
	if (y == 2) { if (x == 1)cout << substract(a, b) << endl; else cout << substractd(c, d) << endl; }
	if (y == 3) { if (x == 1)cout << multiply(a, b) << endl; else cout << multiplyd(c, d) << endl; }
	if (y == 4) { if (x == 1)cout << divide(a, b) << endl; else cout << divided(c, d) << endl; }
	return 0;
}