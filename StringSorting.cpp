// include "pch.h"
#include <iostream>
using namespace std;
struct BSTnode {
	char data;
	BSTnode* leftChild;
	BSTnode* rightChild;
	int frequency;
};
class BinaryTreeForSearching {
private:
	BSTnode* Root = NULL;
public:
	void InsertData(char a)
	{

		if (Root == NULL)
		{

			BSTnode* abc = new BSTnode();
			abc->rightChild = NULL;
			abc->leftChild = NULL;
			abc->data = a;
			Root = abc;
		}
		else
		{

			ConstructTree(Root, a);
		}
	}
	void ConstructTree(BSTnode* cnode, char value)
	{
		if ((int)value < (int)cnode->data)
		{
			if (cnode->leftChild == NULL)
			{
				BSTnode* abc = new BSTnode();
				abc->rightChild = NULL;
				abc->leftChild = NULL;
				abc->data = value;
				abc->frequency = 1;
				cnode->leftChild = abc;
			}
			else
			{
				ConstructTree(cnode->leftChild, value);
			}
		}
		else if ((int)value > (int)cnode->data)
		{
			if (cnode->rightChild == NULL)
			{
				BSTnode* abc = new BSTnode();
				abc->rightChild = NULL;
				abc->leftChild = NULL;
				abc->data = value;
				abc->frequency = 1;
				cnode->rightChild = abc;
			}
			else
			{
				ConstructTree(cnode->rightChild, value);
			}
		}
		else
		{
			cnode->frequency++;
		}

	}
	void Searching(char a)
	{
		bool isValueFound = false;
		BSTnode* temp = new BSTnode();
		temp = Root;
		while (temp != NULL)
		{
			if (temp->data == a)
			{

				isValueFound = true;
				break;
			}
			else
			{
				if ((int)a > (int)temp->data)
				{
					temp = temp->rightChild;
				}
				else
					temp = temp->leftChild;
			}
		}
		if (isValueFound)
		{
			cout << "Value Found!";
		}
		else
		{
			cout << "Not found!";
		}

	}
};

int main()
{
	std::cout << "Hello World!\n";
	BinaryTreeForSearching abc;
	string word = "skeptical";
	for (size_t i = 0; i < 9; i++)
	{
		abc.InsertData(word[i]);
	}
	abc.Searching('c');
	
}