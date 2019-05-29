#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct Group {
	string id;
	int year;
	string students[40];
};
int main()
{
	setlocale(0, "");
	Group group = {(string)"ИНБО-03", 2018, {(string)"Анатолий Яровиков ",(string)"Дульнев Вячеслав ",(string)"Семин Илья "};
	return 0;
}