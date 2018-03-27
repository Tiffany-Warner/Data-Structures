/********************************************************************
** Author: Tiffany Warner
** Date Created: March 27 2018
** Description: Utilzing the Stack ADT with a Dynamic Array
********************************************************************/
#include "Stack.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

//Function prototypes
void testPush(Stack &stack, int numValues);
void testTopPop(Stack &stack);

int main() {
	cout << "**********Stack**********" << endl;
	Stack stack;

	testPush(stack, 10);
	testTopPop(stack);

	cout << "Press any key to continue..." << endl;
	cin.get();
	return 0;
}
/********************************************************************
**						testPush
** Description: Fills a stack with numbers from 1 to specified number
** utilizing push operation. 
********************************************************************/
void testPush(Stack &stack, int numValues) {

	for (int i = 1; i <= numValues; i++) {
		stack.push(i);
	}
	stack.printStack();
}

/********************************************************************
**						testPop
** Description: Pops all values out of the stack, plus 5 additional
** times
********************************************************************/
void testTopPop(Stack &stack) {
	int size = stack.getSize();
	TYPE value = -1;
	for (int i = 1; i <= size + 5; i++) {
		TYPE value = stack.top();
		cout << "Popping value: " << value << endl;
		stack.pop();
	}
	stack.printStack();
}