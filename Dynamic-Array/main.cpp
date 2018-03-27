/********************************************************************
** Author: Tiffany Warner
** Date Created: March 25 2018
** Last Edit date: March 26 2017
** Description: Custom Dynamic Array Driver Program
********************************************************************/
#include "DyArray.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void printArr(DyArray &dyArr);
void fillValues(DyArray &dyArr, int numValues);

int main(){
	cout << "**********Dynamic Array**********" << endl;
	//DyArray dynamicArr1(0); //This should fail
	//cin.get();

	DyArray dynamicArr2(2); //Create Dynamic Array object with a capacity of 2

	cout << "Adding numbers 1-5 to the array using add() method." << endl;
	fillValues(dynamicArr2, 5);
	printArr(dynamicArr2);

	cout << "Inserting Value: 99 at Index: 1" << endl;
	dynamicArr2.insertAt(1, 99);
	printArr(dynamicArr2);
	cout << "Inserting Value: 88 at Index: 0" << endl;
	dynamicArr2.insertAt(0, 88);
	printArr(dynamicArr2);

	cout << "Inserting Value: 77 at Index: " << dynamicArr2.getSize() - 1 << endl;
	dynamicArr2.insertAt(dynamicArr2.getSize() - 1, 77);
	printArr(dynamicArr2);

	cout << "ERROR Example" << endl;
	cout << "Inserting Value: 404 at Index: 13" << endl;
	dynamicArr2.insertAt(13, 404);
	printArr(dynamicArr2);

	cout << "Remove value at Index: 0" << endl;
	dynamicArr2.removeAt(0);
	printArr(dynamicArr2);

	cout << "Remove value at Index: " << dynamicArr2.getSize() - 1 << endl;
	dynamicArr2.removeAt(dynamicArr2.getSize()-1);
	printArr(dynamicArr2);

	cout << "Put Value: 16 at Index: " << dynamicArr2.getSize() - 1 << endl;
	dynamicArr2.put(dynamicArr2.getSize() - 1, 16);
	printArr(dynamicArr2);

	cout << "Put Value: 43 at Index: " << 3 << endl;
	dynamicArr2.put(3, 43);
	printArr(dynamicArr2);

	cout << "Remove all" << endl;
	int size = dynamicArr2.getSize();
	for(int i = 0; i < size; i++) {
		dynamicArr2.removeAt(dynamicArr2.getSize() - 1);
	}
	printArr(dynamicArr2);
	cout << "Try to remove from an empty array" << endl;
	dynamicArr2.removeAt(0);

	cout << "Press any key to continue...";
	cin.get();

	return 0;
}
/********************************************************************
**						printArr
** Description: Prints an array, the array size and associated indices
********************************************************************/
void printArr(DyArray &dyArr) {
	int size = dyArr.getSize();
	cout << "Array size: " << size << endl;
	cout << "Values  in Array: ";
	for (int i = 0; i < size; i++) {
		cout << dyArr.getValue(i) << " ";
	}
	cout << "\nIndices in Array: ";
	for (int i = 0; i < size; i++) {
		cout << i << " ";
	}
	cout << "\n" << endl;
}

/********************************************************************
**						printArr
** Description: Fills an array with consecutive values from 1 to the 
** specified number. 
********************************************************************/
void fillValues(DyArray &dyArr, int numValues) {
	for (int i = 1; i <= numValues; i++) {
		dyArr.add(i);
	}
}