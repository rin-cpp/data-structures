
// myqueue.cpp
// Implementation of circular queue using array 

#include <iostream>
#include "myqueue.h"
using namespace std;


myQueue::myQueue(int size_)
{
	size = (size_ < 0 ? 0 : size_);
	arr = new int [size];
	front = rear = -1;
}

void myQueue::enQueue(int key)
{
	// Empty Queue
	if (front == -1 && rear == -1)
	{
		rear = front = 0;
		arr[rear] = key;
	}
	// Overflow
	else if ((rear + 1)%size == front)
		cout << "Overflow." << endl;
	// Enqueue 
	else
	{
		rear = (rear + 1)%size; 
		arr[rear] = key;
	}
}

void myQueue::deQueue()
{
	// Underflow 
	if (rear == -1 && front == -1)
		cout << "Underflow." << endl;
	// One element left 
	else if (front == rear)
	{
		cout << arr[front] << " was dequeued." << endl;
		front = rear = -1;
	}
	// Dequeue
	else 
	{
		cout << arr[front] << " was dequeued." << endl;
		front = (front + 1)%size;
	}
}

int myQueue::peek()
{
	if (front != -1)
		return (arr[front]);
	else
		cout << "Queue is empty." << endl;
	return (-INT_MAX);
}

bool myQueue::isEmpty()
{
	return (front == -1);
}

bool myQueue::isFull()
{
	return ((rear + 1)%size == front);
}

void myQueue::display()
{
	int i = front;
	while (i != rear)
	{
		cout << arr[i] << ' ';
		i = (i + 1)%size;
	}
	cout << arr[rear] << endl;
}


