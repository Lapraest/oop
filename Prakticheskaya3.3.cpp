#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct Book {
	int year;
	int count_of_pages;
	string name;
	string author;
};
int main()
{
	setlocale(0, "");
	Book book1 = { 2011, 600, (string)"Играть чтобы жить",(string)"Дмитрий Рус" };
	return 0;
}