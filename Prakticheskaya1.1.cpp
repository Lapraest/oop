#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	char Imya[20]="";
	setlocale(0, "");
	cout << "Как вас зовут?\n";
	cin.getline(Imya, 20);
	cout << "\nЗдравствуйте, " << Imya << ".\n";
	return 0;
}
