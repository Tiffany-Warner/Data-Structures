/********************************************************************
** Author: Tiffany Warner
** Date: 3/25/18
** Description: Dynamic Array Implementation file
********************************************************************/
#include "DyArray.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*======================Public Functions===========================*/

/********************************************************************
**			Constructor
** Description: Initializes a new data array with specified capacity
********************************************************************/
DyArray::DyArray(int capacity) {
	if (capacity > 0) {
		//Allocate memory
		data = new TYPE[capacity];
	}
	else {
		cout << "Capacity must be greater than zero..." << endl;
	}

	//Check to ensure memory allocation was successful
	if (data == 0) {
		cout << "ERROR: Memory allocation failed." 
			 << endl;
		return;
	}
	size = 0;
	this->capacity = capacity;
}
/********************************************************************
**			getSize
********************************************************************/
int DyArray::getSize() {
	return size;
}
/********************************************************************
**			add
** Description: Checks size and capacity to see if a resize is needed.
** Then adds a new element to the "end" of the array
********************************************************************/
void DyArray::add(TYPE value) {
	if (size >= capacity) {
		resize();
	}
	//Size is one element passed the last one since our index starts at 0
	data[size] = value;
	size++;
}

/********************************************************************
**			put
** Description: Inserts a value at specified index by overwriting 
** current value.
********************************************************************/
void DyArray::put(int index, TYPE value) {
	//Check if index is valid
	if (index >= 0 && index < size) {
		data[index] = value;
	}
	else {
		cout << "ERROR: Specified index is out of range of array...\n"
			<< endl;
	}
}
/********************************************************************
**			insertAt
** Description: Inserts a value into the array at a specified index.
** Moves remaining values over one index. 
********************************************************************/
void DyArray::insertAt(int index, TYPE value) {

	//Check if index is valid
	if (index >= 0 && index < size) {
		//Check if a resize is necessary
		if (size >= capacity) {
			resize();
		}
		//Move elements one over
		//We work backwards starting at the next available index
		for (int i = size; i > index; i--) {
			data[i] = data[i - 1];
		}
		//Set new value at index
		data[index] = value;
		size++;
	}
	else {
		cout << "ERROR: Specified index is out of range of array...\n"
			<< endl;
	}
}

/********************************************************************
**			removeAt
** Description: Removes element at specified location
********************************************************************/
void DyArray::removeAt(int index) {

	//Check if index is valid and that the array is not empty
	if (!isEmpty() && index < size) {
		//Move elements one over to overwrite value being removed
		for (int i = index; i < size - 1; i++) {
			data[i] = data[i + 1];
		}
		//Decrement size
		size--;
	}
	else {
		cout << "ERROR: Specified index is out of range of array...\n"
			<< endl;
	}

}
/********************************************************************
**			getValue
** Description: Retrieves value of element at specified index
********************************************************************/
TYPE DyArray::getValue(int index){
	//Check if index is valid
	if (index >= 0 && index < size) {
		return data[index];
	} else {
		cout << "ERROR: Specified index is out of range of array...\n"
			<< endl;
		return failed;
	}
}

/********************************************************************
**			isEmpty()
** Description: Checks if array is empty. Return true if empty, 
** otherwise return false
********************************************************************/
bool DyArray::isEmpty() {
	if (size > 0) {
		return false;
	}
	else {
		return true;
	}
}
/********************************************************************
**						printArr
** Description: Prints an array, the array size and associated indices
********************************************************************/
void DyArray::printArr(std::string name) {
	cout << name << " size: " << size << endl;
	cout << "Values  in " << name << ": ";
	for (int i = 0; i < size; i++) {
		cout << getValue(i) << " ";
	}
	cout << "\nPosition in " << name << ": ";
	for (int i = 0; i < size; i++) {
		cout << i << " ";
	}
	cout << "\n" << endl;
}

/********************************************************************
**		Destructor
** Description:	Release allocated memory. 
********************************************************************/
DyArray::~DyArray() {
	freeDyArray();
}

/*======================Private Functions===========================*/

/********************************************************************
**			resize
** Description: Doubles capacity of array by creating a new old,
** copying the elements over from the old array and deleting the old
** array.
********************************************************************/
void DyArray::resize() {
	capacity *= 2;
	TYPE * newArr = new TYPE[capacity];
	//Copying over old values
	for (int i = 0; i < size; i++) {
		newArr[i] = data[i];
	}
	freeDyArray();
	data = newArr;
	newArr = 0;
}
/********************************************************************
**			freeDyArray
** Description:	Allows user to release memory and reset their
** dynamic array properties to zero
********************************************************************/
void DyArray::freeDyArray() {
	//Check that data points to memory and delete
	if (data != 0) {
		delete [] data;
		data = 0;
	}
	else {
		cout << "Error: No dynamic array detected...\n" << endl;
	}
}
