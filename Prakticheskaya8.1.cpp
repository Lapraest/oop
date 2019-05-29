#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	setlocale(0, "");
	ofstream f1;
	ifstream f2;
	f2.open("new.txt");
	if (f2.is_open()) {
		string s;
		while (!f2.eof()) {
			f2 >> s;
			cout << s << endl;
		}
		f2.close();
	}
	else {
		cout << "Файла нет, но вы держитесь." << endl;
		f1.open("new.txt");
		f1.close();
	}
	return 0;
}