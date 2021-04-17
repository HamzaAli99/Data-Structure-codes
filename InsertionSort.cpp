// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void InsertionSort(int arr[], int n)
{
	int i,j, key;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
	//	arr[j + 1] = key;
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) 
	{
		std::cout << arr[i] << " ";
		std::cout << "\n";
	}
}

int main()
{
 //   std::cout << "Hello World!\n";
	int arr[5] = { 5,2,4,3,8 };
	int size = sizeof(arr) / sizeof(arr[1]);
	InsertionSort(arr, size);
	printArray(arr, size);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
