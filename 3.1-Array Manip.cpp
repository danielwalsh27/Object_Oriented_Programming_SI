//create two functions. printArray to print all items of array
//increaseArray takes the old array and copies to the new array
//create arraySize, arrayCap, and user input (all ints)
//create array of size arrayCap
//while statement to loop thru (-1 to exit)
//for loop to ask user to load ints into array, displaying how many spaces are left open
//call printArray func
//ask user to increase array by X integers
//create new array (copy array) (of new size)
//call increaseArray func
//NOTE: Pointers are passed by reference by default

#include <iostream>
using namespace std;
//create two functions. printArray to print all items of array
void printArray(int array[], int arrayCap);
//increaseArray takes the old array and copies to the new array
void increaseArray(int oldArray[], int newArray[], int arrayCap);

int main(){
	//create arraySize, arrayCap, and user input (all ints)
	int arraySize = 0, userInput = 0;
	int arrayCapacity = 10;
	//create array of size arrayCap
	int oldArray[arrayCapacity];

	//while statement to loop thru (-1 to exit)
	while(true){
		//for loop to ask user to load ints into array, displaying how many spaces are left open
		for(; arraySize < arrayCapacity;){
			cout << "You have " << arrayCapacity - arraySize << " spots left, Enter num:";
			cin >> oldArray[arraySize];
			arraySize++;
		}
		//call printArray func
		printArray(oldArray, arrayCapacity);
		int holder;
		cout << "Your array is full.\n";
		cout << "Continue? (-1 to exit):";
		cin >> userInput; if (userInput == -1) break;

		//ask user to increase array by X integers
		cout << "Increase array size by?"; cin >> holder;

		//create new array (copy array) (of new size)
		int newArray[arrayCapacity + holder];

		//call increaseArray func
		increaseArray(oldArray, newArray, arrayCapacity);
		arrayCapacity = arrayCapacity + holder;
	}
}

void printArray(int array[], int arrayCap){
	for(int i = 0; i < arrayCap; i++)
		cout << array[i] << "\t";
}

void increaseArray(int oldArray[], int newArray[], int arrayCap){
	for (int i = 0; i < arrayCap; i++)
		newArray[i] = oldArray[i];
}

//REQUIRED LESSONS
//Students must be reminded that arrays are passed by reference by default
