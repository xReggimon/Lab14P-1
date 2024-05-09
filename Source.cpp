#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

double average(double* a, int size);
//This function returns the average value of an array of floating - point data.In the function, use a pointer variable,
//not an integer index, to traverse the array elements.If the size of the array is 0, return 0.
double* maximum(double* a, int size);
//This function returns a pointer to the maximum value of an array of floating - point data.If the size of the array is
//0, return NULL.
double* minimum(double* a, int size);
//This function returns a pointer to the minimum value of an array of floating - point data.If the size of the array is
//0, return NULL

int main() {
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	if (size <= 0) {
		cout << "Invalid size." << endl;
		return 1;
	}

	double* array = new double[size];

	cout << "Enter " << size << "floating-point values: ";
	for (int i = 0; i < size; i++) {
		cin >> *(array + i);
	}

	double avg = average(array, size);
	cout << "Average is " << avg << endl;

	double* max_ptr
}

double average(double* a, int size) {
	if (size == 0) {
		return 0;
	}

	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(a + i);
	} 
	return sum / size;
}

double* maximum(double* a, int size) {
	if (size == 0) {
		return 0;
	}

	double* max_ptr = a;
	for (int i = 1; i < size; i++) {
		if (*(a + i) > *max_ptr) {
			max_ptr = a + i;
		}
	}
	return max_ptr;
}

double* minimum(double* a, int size) {
	if (size == 0) {
		return 0;
	}
	
	double* min_ptr = a;
	for (int i = 1; i < size; i++) {
		if (*(a + i) < *min_ptr) {
			min_ptr = a + i;
		}
	}
	return min_ptr;
}
