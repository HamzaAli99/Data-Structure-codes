// hashing(linear probing).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define max_size 20

struct DataItem
{
	int data;
	int key;
};

	DataItem* HashArray[max_size];
	DataItem* Dummyitem;
	DataItem* item;

	int hashcode(int key)
	{
		return key % max_size;
	}

	DataItem* search(int key) 
	{
		int hashindex = hashcode(key);
		while(HashArray[hashindex]!=NULL)
		{
			if (HashArray[hashindex]->key == key)
			{
				return HashArray[hashindex];
			}
			++hashindex;
			hashindex %= max_size;
		}
	}


int main()
{
    std::cout << "Hello World!\n";
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
