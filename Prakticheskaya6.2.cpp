#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
class BasicExpression {
public:
	virtual void display() = 0;
	virtual double calculatedexpression(double x) = 0;
	virtual void derivative() = 0;
	virtual BasicExpression* copy() = 0;
};
class Constant : public BasicExpression {
public:
	void display() {
		cout << " f(x) = const" << endl;
	}
	double calculatedexpression(double x) {
		return 1;
	}
	void derivative() {
		cout << "Derivative of f(x) is 0" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new Constant;
		return expression;
	}
};
class Variable : public BasicExpression {
public:
	void display() {
		cout << " f(x) = x" << endl;
	}
	double calculatedexpression(double x) {
		return x;
	}
	void derivative() {
		cout << "Derivative of f(x) is 1" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new Variable;
		return expression;
	}
};
class Add : public BasicExpression {
public:
	void display() {
		cout << " f(x) = x+x" << endl;
	}
	double calculatedexpression(double x) {
		return x + x;
	}
	void derivative() {
		cout << "Derivative of f(x) is 2" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new Add;
		return expression;
	}
};
class Substract : public BasicExpression {
public:
	void display() {
		cout << " f(x) = x^3-x" << endl;
	}
	double calculatedexpression(double x) {
		return pow(x, 3) - x;
	}
	void derivative() {
		cout << "Derivative of f(x) is 3*(x)^2 - 1" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new Substract;
		return expression;
	}
};
class Multiply : public BasicExpression {
public:
	void display() {
		cout << " f(x) = x*(x-2) + 1" << endl;
	}
	double calculatedexpression(double x) {
		return x * (x - 2) + 1;
	}
	void derivative() {
		cout << "Derivative of f(x) is 2*x - 2" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new Multiply;
		return expression;
	}
};
class Divide : public BasicExpression {
public:
	void display() {
		cout << " f(x) = (x^2 - 2)/(x + 4)" << endl;
	}
	double calculatedexpression(double x) {
		return (pow(x, 2) - 2) / (x + 4);
	}
	void derivative() {
		cout << "Derivative of f(x) is (x^2 + 8*x + 2)/(x + 4)^2" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new Multiply;
		return expression;
	}
};
class Sinus : public BasicExpression {
public:
	void display() {
		cout << " f(x) = sin (x)" << endl;
	}
	double calculatedexpression(double x) {
		return sin(x);
	}
	void derivative() {
		cout << "Derivative of f(x) is cos (x)" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new Sinus;
		return expression;
	}
};
class Cosinus : public BasicExpression {
public:
	void display() {
		cout << " f(x) = cos (x)" << endl;
	}
	double calculatedexpression(double x) {
		return cos(x);
	}
	void derivative() {
		cout << "Derivative of f(x) is -sin (x)" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new Cosinus;
		return expression;
	}
};
class Exponent : public BasicExpression {
public:
	void display() {
		cout << " f(x) = exp (x)" << endl;
	}
	double calculatedexpression(double x) {
		return exp(x);
	}
	void derivative() {
		cout << "Derivative of f(x) is exp (x)" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new Exponent;
		return expression;
	}
};
class NaturalLog : public BasicExpression {
public:
	void display() {
		cout << " f(x) = ln (x)" << endl;
	}
	double calculatedexpression(double x) {
		return log(x);
	}
	void derivative() {
		cout << "Derivative of f(x) is 1/x" << endl;
	}
	BasicExpression* copy() {
		BasicExpression* expression = new NaturalLog;
		return expression;
	}
};