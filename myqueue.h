
// myqueue.h 

#include <iostream>
using namespace std;

#ifndef myQueue_h 
#define myQueue_h 
class myQueue {
public:
	myQueue(int size_);
	void enQueue(int );
	void deQueue();
	int peek();
	bool isEmpty();
	bool isFull();
	void display();

private:
	int size;
	int front, rear;
	int *arr;
};
#endif 
