#include <iostream>  
#include <iomanip>  
#include <time.h>  
using namespace std;
void CreateArray(int* a, const int size, const int High, const int Low)
{
	for (int i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
		cout << a[i] << " ";
	}
}
void PrintArraySum(int* a, const int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if ((a[i] % 2 != 0) && (a[i] > 0))

		{
			sum += a[i];
		}
	}
	cout << endl;
	cout << "Sum = " << sum << endl;
}
void PrintNotZeroArraySize(int* a, const int size)
{
	int notZeroSize = 0;
	for (int i = 0; i < size; i++) {
		if ((a[i] % 2 != 0) && (a[i] > 0))

		{
			notZeroSize++;
		}
	}
	cout << endl;
	cout << "Count = " << notZeroSize << endl;
}
void Print(int* a, const int size)
{
	cout << "Array Elements: ";

	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0)
		{
			cout << a[i] << ", ";
		}
	}

	cout << endl;

int main();
{
	int test[23];
	int newTest[23];

	CreateArray(test, 23, -25, 80);
	Print(test, 23);
	Print(newTest, 23);
	PrintArraySum(newTest, 23);
	PrintNotZeroArraySize(newTest, 23);

}


