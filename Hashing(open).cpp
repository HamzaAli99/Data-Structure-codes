// Hashing(open).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;
class OpenHashing {
private:
	int size;
	list<int> *table;
public :
	void hash(int n)
	{
		this->size = n;
		table = new list<int>[size];
	}
	int hashFunction(int key)
	{
		return (key % size);
	}
	void insert(int key)
	{
		int index = hashFunction(key);
		table[index].push_back(key);
	}
	void deletion(int key)
	{
		int index = hashFunction(key);
		list<int> ::iterator i;
		for (i = table[index].begin(); i != table[index].end(); i++)
		{
			if (*i == key)
			{
				table[index].erase(i);
				break;
			}
		}
	}
	void display()
	{
		for (int i = 0; i < size; i++)
		{
			cout << i;
			for (auto X : table[i])
			{
				cout << "-->" << X ;
			}
			cout << "\n";
		}
	}
};
int main()
{
	OpenHashing *abc = new OpenHashing();
	abc->hash(6);
	abc->insert(45);
	abc->insert(48);
	abc->insert(65);
	abc->insert(98);
	abc->insert(72);
	abc->insert(105);
	abc->deletion(65);
	abc->display();

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
