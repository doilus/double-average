#include <iostream>
#include <cmath>
const double* aver(const double* arr,
	size_t size, double& average) {
	// ...
	double sum = 0;
	int nsize = size;

	//suma elementow tablicy
	for (int i = 0; i < nsize; i++)
	{
		sum = sum + arr[i];
	}

	//srednia 
	average = sum / nsize;

	//sprawdzamy ktory element tablicy jest najblizej sredniej

	int index = 0;
	double min, n;
	min = abs(arr[0] - average); //wartosc bezwgledna z pierwszego elementu 

	for (int i = 1; i < nsize; i++)
	{
		n = abs(arr[i] - average);
		if (n < min) {
			min = n;
			index = i;
		}
	}

	return &arr[index];

}
int main() {
	using std::cout; using std::endl;

	double arr[] = { 1,7,5,4,3,2 };
	size_t size = sizeof(arr) / sizeof(arr[0]);
	double average = 0;
	const double* p = aver(arr, size, average);
	cout << *p << " " << average << endl;
}