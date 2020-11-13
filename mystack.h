
// mystack.h

#include <iostream>
using namespace std;

#ifndef myStack_h
#define myStack_h
class myStack {
public:
	myStack(int size_);
	void push(int );
	void pop();
	int peek();
	bool isEmpty();
	bool isFull();
private:
	int *arr;
	int size;
	int top;
};
#endif 
