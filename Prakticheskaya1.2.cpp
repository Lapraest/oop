#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c,d;
	float z, x, y;
	cout << "С какими числами мы будем работать?\n 1.Целые числа\n 2.Числа с плавующей запятой\n";
		cin >> d;
		cout << "Введите эти числа:\n";
		if (d == 1) { cin >> a >> b;
		cout << "Какое действие мы будем выполнять с числами?\n 1.Сложение\n 2.Вычитание\n";
		cin >> d;
		if (d == 1) { c = a + b; }
		else { c = a - b; }
		cout << "Получилось чило: " << c;
		}
		else {
			cin >> z >> x;
			cout << "Какое действие мы будем выполнять с числами?\n 1.Сложение\n 2.Вычитание\n";
			cin >> d;
			if (d == 1) { y = z + x; }
			else { y = z - x; }
			cout << "Получилось чило: " << y;
		}
		return 0;


}
