/********************************************************************
** Author: Tiffany Warner
** Date: 3/25/18
** Description: Bag Implementation file
********************************************************************/
#include "Bag.hpp"
#include <iostream>

/********************************************************************
**			Constructor
** Description: Initializes a new DyArray object with capacity
** for number of items specified
********************************************************************/
Bag::Bag(int numItems) {
	bag = new DyArray(numItems);
}

/********************************************************************
**			getSize
********************************************************************/
int Bag::getSize() {
	return bag->getSize();
}

/********************************************************************
**			add
** Description: Adds a value to the bag (as the last item).
********************************************************************/
void Bag::add(TYPE value) {
	bag->add(value);
}

/********************************************************************
**			contains
** Description: Searches the bag for specified value. Returns true 
** if found and false otherwise
********************************************************************/
//Better to use binary search here -- Maybe implement alternative version later
bool Bag::contains(TYPE value) {
	int size = bag->getSize();
	for (int i = 0; i < size; i++) {
		if (bag->getValue(i) == value) {
			return true;
		}
	}
	return false;
}

/********************************************************************
**			remove
** Description: Removes value from bag if it exists in the bag
********************************************************************/
void Bag::remove(TYPE value) {
	int size = bag->getSize();
	for (int i = 0; i < size; i++) {
		if (bag->getValue(i) == value) {
			bag->removeAt(i);
			return;
		}
	}
	std::cout << "Bag does not contain the value: " << value << std::endl;
}

/********************************************************************
**			printBag
** Description: prints the contents of the bag and the associated 
** positions of items in bag. 
********************************************************************/
void Bag::printBag(std::string name) {
	std::cout << std::endl;
	if (bag->getSize() == 0) {
		std::cout << "The bag is empty!" << std::endl;
	}
	else {
		this->bag->printArr(name);
	}
}

/********************************************************************
**			Destructor
** Description: Deallocate memory for the bag
********************************************************************/
Bag::~Bag() {
	delete bag;
}
