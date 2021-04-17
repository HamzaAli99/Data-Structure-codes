// SelectionSort new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void SelectionSort(int arr[],int n)
{
	int minvalue, loc,i,j;
	{
		for (i = 0; i < n - 1; i++)
		{
			minvalue = arr[i];
			//loc = i;
			for (j = i + 1; j < n; j++)
			{
				if (arr[j] < minvalue)
				{
					minvalue = arr[j];
					loc = j;
				}
			}
			swap(&arr[i], &arr[loc]);
		}
	}

}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
		std::cout << "\n";
	}
}


int main()
{
   // std::cout << "Hello World!\n";
	int arr[5] = { 3,5,2,1,6};
	int size = 5;
	SelectionSort(arr, size);
	PrintArray(arr, size);
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
