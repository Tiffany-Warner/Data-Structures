/********************************************************************
** Author: Tiffany Warner
** Date: 3/25/18
** Description: Bag Header File - Basic Bag Data Structure
********************************************************************/
#ifndef BAG_HPP
#define BAG_HPP

#include "DyArray.hpp"

typedef int TYPE;  //Change this to accommodate appropriate type
			      //IMPORTANT: This type needs to match DyArray.hpp
class Bag {
private:
	DyArray * bag;

public:
	Bag(int numItems);
	int getSize();  
	void add(TYPE value);  //Add value to back of bag
	bool contains(TYPE value); //Returns true if value exists in bag and false otherwise
	void remove(TYPE value); //Removes a value from bag if it is found. 
	void printBag(std::string name = "Bag");
	~Bag();
};

#endif

