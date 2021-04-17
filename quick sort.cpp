// quick sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class quicksort {
public:
	int Partition(int start,int end,int *A) {
		int p_index =start;
		int pivot = end;

		for (int i = 0; i < end; i++)
		{
			if (A[i] <= pivot)
			{
				int temp = A[p_index];
				A[p_index] = A[i];
				A[i] = temp;
				p_index++;
			}

		}
		
			int temp1 = A[p_index];
			A[p_index] = A[pivot];
			A[pivot] = temp1;
		
		return p_index;
	}
	void QuickSort(int start, int end, int *A)
	{
	
		if (start < end)
		{
			 int partition_index = Partition(start, end, A);
			 QuickSort(start, partition_index - 1, A);
			 QuickSort(partition_index + 1, end, A);
		}
	}
};
int main()
{
    //std::cout << "Hello World!\n";
	quicksort *quick = new quicksort();
	int a[] = {4,7,6,2,9,11,1};
	quick->QuickSort(0, 6, a);
	/*for (size_t i = 0; i < 7; i++)
	{
		std::cout << a[i] << +" ";
	}*/
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
