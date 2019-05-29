#include <iostream>
#include <string>
using namespace std;
struct Point {
	float x;
	float y;
};
struct Vektor {
	Point p1;
	Point p2;
};


int main() {
	Vektor vec = { {1.5,3.49 },{-7.0,18.8} };
	return 0;
}