// queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct queue
{
	int data;
	queue *next;
};
class myqueue
{
private:
	queue *rear, *front;
	int count;
public:
	myqueue() 
	{
		count = 0;
		rear = NULL;
		front = NULL;
	}
	void enqueue(int value)
	{
		queue *temp = new queue();
		temp->data = value;
		temp->next = NULL;
		count = count++;
		if(front==NULL && rear == NULL)
		{
			front = temp;
			rear = temp;
		}
		else
		{
			rear->next = temp;
			rear = temp;
		}
	}
	void display()
	{
		queue *temp = new queue();
		temp = front;
		while (temp != NULL)
		{
			std::cout << " Values are: " << temp->data << + "\n" ;
			temp = temp->next;
		}
		std::cout <<"\n"<< "count " <<count<<"\n";
	}
	void dequeue()
	{
		if (count != 0) {
			queue *temporary;
			temporary = front->next;
			free(front);
			front = temporary;
			count--;
		}
		else
		{
			std::cout << "underflow";
		}
	}
};

int main()
{
    std::cout << "Hello World!\n"; 
	myqueue *q = new myqueue();
	q->enqueue(5);
	q->enqueue(6);
	q->enqueue(7);
	q->display();
	q->dequeue();
	q->dequeue();
	q->dequeue();
	q->dequeue();
	q->display();
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
