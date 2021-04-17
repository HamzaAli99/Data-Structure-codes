// linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct node 
{
	int data;
	node *next;

};
class linkedList
{
private:
	node *head, *tail;
public:
	linkedList()
	{
		head = NULL;
		tail = NULL;
	}
	void insert_append(int value) 
	{ 
		node *temp = new node();
		temp->data = value;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}
	void display()
	{
		node *temp;
		temp = head;
		while (temp!= NULL)
		{
			std::cout <<"temp data = " << temp->data << "\n";
			temp = temp->next;
		}
	}

};

int main()
{
	linkedList *abc = new linkedList();
	abc->insert_append(5);
	abc->insert_append(6);
	abc->insert_append(7);
	abc->display();
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
