// bubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "pch.h"

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) 
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				

				swapped = true;
			}
		 }
			if(swapped == false)
			{
				break;
			}

	}
}
void printArray(int arr1[],int size)
{
	for (int i = 0; i < size; i++) {
		std::cout << arr1[i] << "\n";
	}
}

int main()
{
   // std::cout << "Hello World!\n";
	int arr[] = { 23,32,12,15,2,67,75,56 };
	int n = sizeof(arr) / sizeof(arr[1]);
	//printArray(arr, n);
	bubbleSort(arr, 8);
	printArray(arr, 8);

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
