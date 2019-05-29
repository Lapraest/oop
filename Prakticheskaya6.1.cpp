#include "pch.h"
#include <iostream>
using namespace std;

class Property {
protected:
	int worth;
public:
	Property() {}
	virtual int result() = 0;
};

class Appartment : public Property {
public:
	Appartment(int a) { worth = a; }
	int result() {
		return worth / 1000;
	}
};

class Car : public Property {
public:
	Car(int a) { worth = a; }
	int result() {
		return worth / 200;
	}
};

class CountryHouse : public Property {
public:
	CountryHouse(int a) { worth = a; }
	int result() {
		return worth / 500;
	}
};

int main() {
	Property **array = new Property*[7];
	array[0] = new Appartment(6500000);
	array[1] = new Appartment(10900000);
	array[2] = new Appartment(8540389);
	array[3] = new Car(2000000);
	array[4] = new Car(3600000);
	array[5] = new CountryHouse(12900000);
	array[6] = new CountryHouse(45100000);
	for (int i = 0; i < 7; i++) {
		cout << "Nalog: " << array[i]->result() << endl;
	}
	delete[]array;
	return 0;
}