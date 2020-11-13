
// mystack.cpp
// Implementation of stack using array 

#include <iostream>
#include "mystack.h"
using namespace std;

myStack::myStack(int size_)
{
	size = (size_ < 0 ? 0 : size_);
	arr = new int [size];
	top = -1;
}

void myStack::push(int key)
{
	// Overflow 
	if (top == size - 1)
		cout << "Stack overflow." << endl; // :)
	// Push
	else 
	{
		top++;
		arr[top] = key;
	}
}

void myStack::pop()
{
	// Underflow 
	if (top == -1)
		cout << "Stack underflow." << endl;
	else
	{
		cout << arr[top] << " was popped." << endl;
		top--;
	}
}

int myStack::peek()
{
	if (top != -1)
		return (arr[top]);
	else
		cout << "Stack is empty." << endl;
	return (-INT_MAX);
}

bool myStack::isEmpty()
{
	return (top == -1);
}	

bool myStack::isFull()
{
	return (top == size - 1);
}

