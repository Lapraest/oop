#include "pch.h"
#include <iostream>
int location;
using namespace std;
void insertsort(int*, int);
void insertsort(double*, int);
int main()
{
	int size = 10;
	int array[10] = { 53,67,32,79,23,75,34,38,52,239 };
	double arr[10] = { 39.239,358.23,27.29,98.34,34.95,26.576,28.8,82.47,5.87,25.78 };
	insertsort(array, size);
	insertsort(arr, size);
	for (int i = 0; i < size; i++) {
		cout << "integer array:" << array[i];
		cout << '\t';
		cout << "double array:" << arr[i] << endl;
	}
	cin.get(); cin.get();
	return 0;
}
void insertsort(int* arr, int size) {
	for (int i = 1; i < size; i++)
	{
		int newElement = arr[i];
		location = i - 1;
		while (location >= 0 && arr[location] > newElement)
		{
			arr[location + 1] = arr[location];
			location = location - 1;
		}
		arr[location + 1] = newElement;
	}
}
void insertsort(double* arr, int size) {
	for (int i = 1; i < size; i++)
	{
		double newElement = arr[i];
		location = i - 1;
		while (location >= 0 && arr[location] > newElement)
		{
			arr[location + 1] = arr[location];
			location = location - 1;
		}
		arr[location + 1] = newElement;
	}
}