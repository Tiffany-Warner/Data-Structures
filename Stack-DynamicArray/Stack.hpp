/********************************************************************
** Author: Tiffany Warner
** Date: 3/27/18
** Description: Stack Header File - Basic Stack Data Structure
** The back of the array is considered the "top" of the stack.
********************************************************************/
#ifndef STACK_HPP
#define STACK_HPP

#include "DyArray.hpp"
#include <string>

typedef int TYPE;  //Change this to accommodate appropriate type
				   //IMPORTANT: This type needs to match DyArray.hpp
class Stack {
private:
	DyArray *stack;

public:
	Stack(int capacity = 2);
	int getSize();
	TYPE top();
	void push(TYPE value);
	void pop();
	bool isEmpty();
	void printStack(std::string name = "Stack");
	~Stack();
};

#endif