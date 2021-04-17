// #include "pch.h"
#include <iostream>
using namespace std;
struct BSTnode {
	int data;
	BSTnode* leftChild;
	BSTnode* rightChild;
	int frequency;
};
class BinaryTreeForSearching {
private:
	BSTnode* Root = NULL;
public:
	void InsertData(int a)
	{

		if (Root == NULL)
		{

			BSTnode* temp = new BSTnode();
			temp->rightChild = NULL;
			temp->leftChild = NULL;
			temp->data = a;
			Root = temp;
		}
		else
		{

			ConstructTree(Root, a);
		}
	}
	void ConstructTree(BSTnode* cnode, int value)
	{
		if (value < cnode->data)
		{
			if (cnode->leftChild == NULL)
			{
				BSTnode* temp = new BSTnode();
				temp->rightChild = NULL;
				temp->leftChild = NULL;
				temp->data = value;
				temp->frequency = 1;
				cnode->leftChild = temp;
			}
			else
			{
				ConstructTree(cnode->leftChild, value);
			}
		}
		else if (value > cnode->data)
		{
			if (cnode->rightChild == NULL)
			{
				BSTnode* temp = new BSTnode();
				temp->rightChild = NULL;
				temp->leftChild = NULL;
				temp->data = value;
				temp->frequency = 1;
				cnode->rightChild = temp;
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
	void Searching(int a)
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
				if (temp->data < a)
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
	BinaryTreeForSearching temp;
	temp.InsertData(5);
	temp.InsertData(10);
	temp.InsertData(7);
	temp.InsertData(98);
	temp.Searching(7);
	return 0;												
}