#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

double * memory(int *size) {              //Эта функция выделяет память для массива
	cout << "Введите размер массива: ";
	cin >> *size;
	double *a = new double[*size];
	system("CLS");						  //"Очистка" экрана
	cout << "Был создан массив размера " << *size  << endl << endl;
	return a;
}

double * fill(double *a, int size, bool zapolnenie) {	//Эта функция позволяет заполнить массив
	if (zapolnenie) {
		for (int i = 0; i < size; i++) {
			cout << "a[" << i << "]= ";
			cin >> a[i];
		}
		system("CLS");
		cout << "Поздравляю, вы заполнили массив самостоятельно!" << endl << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			a[i] = double(rand() % 127) / 1.9;
		}
		system("CLS");
		cout << "Будет время, когда вы будете работать на роботов, на а пока они работают на вас." << endl << endl;
	}
	return a;
}

void print_a(double *a, int size) {    //Эта функция позволяет вывести массив на экран
	for (int i = 0; i < size; i++) {
		cout << "a[" << i << "]= " << a[i] << endl;
	}
}

void delete_a(double *a, int *size) {  //Эта функция позволяет удалить масств
	if (*size == 0) {
		cout << "Если вы сможете удалить пустоту, то станете выше богов, ну а пока вы мелкая сошка и вам надо его заполнить." << endl << endl;
	}
	else {
		delete[] a;
		a = NULL;
		*size = 0;
		cout << "Массив удален." << endl << endl;
	}
}

void menu() {        //Меню взаимодействия, для работы с пользователем
	cout << "Введите: " << endl;
	cout << "	1 для создания массива;" << endl;
	cout << "	2 для заполнения массива;" << endl;
	cout << "	3 для вывода на экран массива;" << endl;
	cout << "	4 для удаления массива;" << endl;
	cout << "	5 для выхода из программы;" << endl;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "Приветствую! Следуйте инструкциям для работы с массивом." << endl << endl;
	int size = 0;
	double *a = 0;
	bool cycle_exit = false;  // переменная для выхода из вечного цикла
	bool empty = true;	//переменная нужна для отслеживания, заполнен ли созданный массив значениями
	bool zapolnenie = false;

	while (true) {
		menu();
		int answer;
		cin >> answer;
		switch (answer) {
		case 1:
			system("CLS");
			if (size != 0) {
				cout << "Необходимо удалить старый массив перед созданием нового." << endl << endl;
			}
			else a = memory(&size);
			break;
		case 2:
			system("CLS");
			if (size == 0) {
				cout << "Ошибка! Массив ещё не создан!" << endl << endl;
				break;
			}
			else {
				cout << "Хотите ли вы создать массив самолично, либо доверите это автоматике? (1/0)" << endl;
				cin >> zapolnenie;
				a = fill(a, size, zapolnenie);
			}
			empty = false;
			break;
		case 3:
			system("CLS");
			if (size == 0) {
				cout << "Внимание! Вы не создали еще массив!" << endl << endl;
				break;
			}
			else if (empty) {
				cout << "Вы не заполнили массив данными! Он внутри пуст также как и многие люди." << endl << endl;
			}
			else print_a(a, size);
			break;
		case 4:
			system("CLS");
			delete_a(a, &size);
			break;
		case 5:
			system("CLS");
			cout << "Благодярю за время, что вы провели вместе со мной. ^_^" << endl;
			cycle_exit = true;
			break;
		}
		if (cycle_exit == 1) break;
	}
	system("pause"); 
	return 0;
}