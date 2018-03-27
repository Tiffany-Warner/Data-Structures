/********************************************************************
** Author: Tiffany Warner
** Date: 3/27/18
** Description: Stack implementation file
********************************************************************/
#include "Stack.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/********************************************************************
**			Constructor
** Description: Allocates memory for a new DyArray object with the
** specified capacity
********************************************************************/
Stack::Stack(int capacity) {
	stack = new DyArray(capacity);
}

/********************************************************************
**			getSize
********************************************************************/
int Stack::getSize() {
	return stack->getSize();
}

/********************************************************************
**			top
** Returns the value at the "top" of the stack / end of the array
********************************************************************/
TYPE Stack::top() {
	int topOfStack = getSize() - 1;
	return stack->getValue(topOfStack);
}

/********************************************************************
**			push
** Adds a value to the "top" of the stack / end of the array
********************************************************************/
void Stack::push(TYPE value) {
	stack->add(value);
}

/********************************************************************
**			pop
** Removes a value from the "top" of the stack / end of the array
********************************************************************/
void Stack::pop() {
	if (!isEmpty()) {
		stack->remove();
	}
	else {
		cout << "The stack is empty.\n" << endl;
	}
}

/********************************************************************
**			isEmpty
** Returns true if the stack is empty, otherwise return false. 
********************************************************************/
bool Stack::isEmpty() {
	return stack->isEmpty();
}

/********************************************************************
**			printStack
********************************************************************/
void Stack::printStack(std::string name) {
	stack->printArr(name);
}

/********************************************************************
**			Destructor
** Deallocate memory for stack pointer
** (Technically DyArray pointer). 
********************************************************************/
Stack::~Stack() {
	delete stack;
	stack = 0;
}