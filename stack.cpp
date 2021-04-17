// stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct node
{
	int data;
	node *next;
};
class stack
{private:
	node *top;
public:
	void push (int value)
	{
		node *temp = new node();
		temp->data = value;
		temp->next = NULL;
		if (top==NULL)
		{
			top = temp;
		}
		else
		{
			temp->next = top;
			top = temp;
		}
	}
	void display()
	{
		node *display = new node();
		display = top;
		while(display!=NULL)
		{
			std::cout << "pushed value = " << display->data<< "\n";
				display = display->next;
		}
	}
	void pop ()
	{
		node *rem; //pop
		rem = top->next;
		free(top);
		top = rem;

	}
};

int main()
{
	stack *abc = new stack();
	abc->push(9);
	abc->push(10);
	abc->push(11);
	abc->pop();
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
