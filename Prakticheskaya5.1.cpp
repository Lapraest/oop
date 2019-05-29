#include "pch.h"
#include <iostream>
using namespace std;
void bubble(int* array,int size);
void bubble(double* array,int size);
int main()
{
	int size = 5;
	int arr[5] = { 87,234,64,312,64 };
	double ar[5] = { 32.1,53.2,87.8,56.5,23.0 };
	bubble(arr, size);
	bubble(ar, size);
	for (int i = 0; i < size; i++) {
		cout <<"integer array:"<< arr[i];
		cout << '\t';
		cout <<"double array:"<< ar[i]<<endl ;
	}
	cin.get(); cin.get();
	return 0;
}
void bubble(int* array, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size -1; j++) {
			if (array[i] > array[j]) swap(array[i], array[j]);
		}
	}
}
void bubble(double* array, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[i] > array[j]) swap(array[i], array[j]);
		}
	}
}