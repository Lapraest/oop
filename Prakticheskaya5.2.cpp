#include "pch.h"
#include <iostream>
using namespace std;
int startindex;
int currentindex;
int minindex;
void selectionsort(int* arr, int size);
void selectionsort(double* arr, int size);
int main()
{
	int size = 10;
	int array[10] = { 38,5,75,3,9,234,98,234,98,42 };
	double ar[10] = { 34.89,38.239,54.3,89.64,4.68,23.36,46.768,5.987,46.65,56.9 };
	selectionsort(array, size);
	selectionsort(ar, size);
	for (int i = 0; i < size; i++) {
		cout << "integer array:" << array[i];
		cout << '\t';
		cout << "double array:" << ar[i] << endl;
	}
	cin.get(); cin.get();
	return 0;
}
void selectionsort(int* arr, int size) {
	for (startindex = 0; startindex < size - 1; startindex++) {
		minindex = startindex;
		for (currentindex = startindex + 1; currentindex < size; currentindex++) {
			if (arr[currentindex] < arr[minindex]) minindex = currentindex;
		}
		swap(arr[startindex], arr[minindex]);
	}
}
void selectionsort(double* arr, int size) {
	for (startindex = 0; startindex < size - 1; startindex++) {
		minindex = startindex;
		for (currentindex = startindex + 1; currentindex < size; currentindex++) {
			if (arr[currentindex] < arr[minindex]) minindex = currentindex;
		}
		swap(arr[startindex], arr[minindex]);
	}
}