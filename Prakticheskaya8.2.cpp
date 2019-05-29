#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	setlocale(0, "");
	ofstream f1;
	string s;
	f1.open("new.txt");
	cout << "Введите текст: " << endl;
	getline(cin, s);
	f1 << s;
	f1.close();
	return 0;
}