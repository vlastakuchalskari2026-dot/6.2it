#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void print(int* a, const int size);
int average(int *a, const int size);
int main()
{
	const int n = 10;
	int a[n] = { 4, -2, -5, 7, 0, -3, 9, -1, 4, 6 };
	print(a, n);
	cout << "Average = " << average(a, n);
	return 0;
}
void print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int average(int* a, const int size)
{
	int av;
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < size; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
		av = (max + min) / 2.0;
	}
	return av;
}