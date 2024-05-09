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

	cout << "Enter " << size << " floating-point values: ";
	for (int i = 0; i < size; i++) {
		cin >> *(array + i);
	}

	double avg = average(array, size);
	cout << "Average is " << avg << endl;

	double* max = maximum(array, size);
	cout << "Maximum value is element #" << (max - array) << ": " << *max << endl;

	double* min = minimum(array, size);
	cout << "Minimum value is element #" << (min - array) << ": " << *min << endl;

	delete[] array;
	return 0;
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

	double* max = a;
	for (int i = 1; i < size; i++) {
		if (*(a + i) > *max) {
			max = a + i;
		}
	}
	return max;
}

double* minimum(double* a, int size) {
	if (size == 0) {
		return 0;
	}
	
	double* min = a;
	for (int i = 1; i < size; i++) {
		if (*(a + i) < *min) {
			min = a + i;
		}
	}
	return min;
}
