/********************************************************************
** Author: Tiffany Warner
** Date: 3/25/18
** Description: Dynamic Array Header File - Basic dynamic array
********************************************************************/

#ifndef DY_ARRAY_HPP
#define DY_ARRAY_HPP
#include<string>

typedef int TYPE;  //Change this to accommodate appropriate type

class DyArray {

private:
	TYPE *data = 0;
	TYPE failed = -1;
	int size;
	int capacity;

	void resize();
	void freeDyArray(); //Used by resize()
public:
	//Constructor - Allocate memory for a new array
	DyArray(int capacity);

	//Retrieve current size of array
	int getSize();

	//Add an element to the array to the end
	void add(TYPE value);

	//Overwrite value at specified index in the array with new value
	void put(int index, TYPE value);

	//Add an element in a specified index in the array without overwriting
	void insertAt(int index, TYPE value);

	//Remove an element in a specified index in the array
	void removeAt(int index);

	//Remove element at the end of the array
	void remove();

	//Retrieve value of element at specified index. 
	TYPE getValue(int index);

	//Returns 1 if empty and 0 otherwise. 
	bool isEmpty();

	//Returns 1 if empty and 0 otherwise. 
	void printArr(std::string name);

	//Destructor - Frees memory used by array
	~DyArray();

};
#endif