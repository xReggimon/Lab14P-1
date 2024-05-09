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
	double userInput;
	cout << "Enter size of array: ";
	cin >> userInput;
}

double average(double* a, int size) {
	if (size == 0) {
		return 0;

		double sum = 0;
		for (int i = 0; i < size; i++) {
			{

			} }
	}
	
}

double* maximum(double* a, int size) {
	return 0;
}

double* minimum(double* a, int size) {
	return 0;
}
