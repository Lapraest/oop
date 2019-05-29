#include"pch.h"
#include<iostream>
using namespace std;

class animal {
protected:
	string name;
	double ves;
	double dlina;
};
class cat :public animal {
public:
	string chtoDelaet = "hodit";
	cat(string a, double b, double c) {
		a = name;
		b = ves;
		c = dlina;
	}
};
class dog :public animal {
public:
	string chtoDelaet = "hodit";
	dog(string a, double b, double c) {
		a = name;
		b = ves;
		c = dlina;
	}
};

class popygai :public animal {
public:
	string chtoDelaet = "letaet";
	popygai(string a, double b, double c) {
		a = name;
		b = ves;
		c = dlina;
	}
};