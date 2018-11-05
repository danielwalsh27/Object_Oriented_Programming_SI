//create an int var to hold the size of your array & string for fullName
//ask user for full name and laod it
//create an int array of the hardcoded size
//load the array with that index's cubed number
//create a int pointer, assign pinter to array
//create and call two functions, printArray & print pointer
//printArray takes in the array and array size
//print pointer takes the pointer to array and the size
//create a file called "SIfile.txt" and load the array into it

#include <iostream>
#include <fstream>
#include <array>
using namespace std;
//functions to print out the entire array, with tabs to space out the integers
void printArray(int [], int size);
void printPointer(int *, int size);

int main(){
	//create an int var to hold the size of your array & string for fullName
	int arraySize = 16;
	string fName;

	//ask user for full name and laod it
	cout << "Enter your full name: ";
	getline(cin,fName);

	cout << "Oh hello there ";
	for(int i= 0; i< fName.length(); i++){	// or .size()
		cout << fName[i];
		if(i == fName.size() - 1) cout << "\n\n";
	}

	//create an int array of the hardcoded size
	int arr[arraySize];

	//load the array with that index's cubed number
	for (int i = 0; i< arraySize; i++){
		arr[i] = i * i * i;
	}

	//creating an array using the ARRAY STL
	array<int, 10> arrayplus;

	arrayplus[0] = 7;
	arrayplus[6] = 4;

	cout << arrayplus.size() << endl;
	cout << arrayplus.at(5) << endl;

	int hold = 5;
	int *pointy = &hold;

	cout << pointy << " then " << *pointy << "\n next attempt: "<< endl;
	*pointy = hold + 40;
	cout << pointy << " then " << *pointy << "\n next attempt: "<< endl;

	//create a int pointer
	int * pointToArray;

	//assign int pointer to our array
	pointToArray = arr;						// = &arr; (this gives an error FYI)
	//pointToArray = &arr[arraySize];		//I read online that this works, tested it and it does not

	//create and call two functions, printArray & print pointer
	//printArray takes in the array and array size
	printArray(arr, arraySize);
	cout << "\n\n ****** Printing pointer now *********\n" << endl;

	//print pointer takes the pointer to array and the size
	printPointer(pointToArray, arraySize);
	cout << endl;

									//if students complete this quickly we will..
	//create a file called "SIfile.txt" and load the array into it
	ofstream fout;
	fout.open("SIFile.txt");

	for (int i = 0; i< 15; i++){
		fout << pointToArray[i] << endl;
	}
}
void printArray(int array[], int size){
	for(int i = 0; i< size; i++){
		cout << array[i] << "\t";
	}
}
void printPointer(int *array, int size){
	for(int i = 0; i< size; i++){
		cout << array[i] << "\n";
	}
}
