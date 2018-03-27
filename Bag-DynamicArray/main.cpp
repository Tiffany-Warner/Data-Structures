/********************************************************************
** Author: Tiffany Warner
** Date Created: March 25 2018
** Last Edit date: March 26 2018
** Description: Utilzing the Bag ADT with a Dynamic Array
********************************************************************/
#include "Bag.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

//Function prototypes
void fillValues(Bag &bag, int numValues);
void testContains(Bag &bag, int numTests);

int main() {
	cout << "**********Bag**********" << endl;
	Bag bag(2);

	fillValues(bag, 10);
	bag.printBag();
	testContains(bag, 15);
	bag.remove(5);
	bag.printBag();

	//Testing remove
	int size = bag.getSize();
	for (int i = 1; i <= size+5; i++) {
		bag.remove(i);
	}
	bag.printBag();

	cout << "Press any key to continue..." << endl;
	cin.get();
	return 0;
}
/********************************************************************
**						fillValues
** Description: Fills an array with consecutive values from 1 to the 
** specified number. 
********************************************************************/
void fillValues(Bag &bag, int numValues) {

	for (int i = 1; i <= numValues; i++) {
		bag.add(i);
	}
}
/********************************************************************
**						testContains
** Description: Test the contains function for integer values 
** 0 - numTests. 
********************************************************************/
void testContains(Bag &bag, int numTests) {
	bool searchRes;
	std::string testRes;
	cout << "Testing contains function" << endl;
	for (int i = 0; i <= numTests; i++) {
		searchRes = bag.contains(i);
		if (searchRes == true) {
			testRes = "FOUND";
		}
		else {
			testRes = "NOT FOUND";
		}
		cout << "Searched for value: " << i << " Results: ";
		cout << testRes << endl;
	}
}