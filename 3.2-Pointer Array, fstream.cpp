//create var of arraySize  & array, open file one.txt
//load file data into array
//call bubblesort to sort the int array, display the sorted array
//create new array dynamically
//copy the old array into the new array
//entering data into the new indexes of the new array
//call bubblesort to sort the int array display the sorted data

#include <iostream>
#include <fstream>
using namespace std;

void bubbleSort(int array[], int arraySize);
int main(){
	//create var of arraySize  & array
	int arraySize = 5;
	int array[arraySize];

	//open file one.txt
	ifstream myFile;
	myFile.open("one.txt");

	//load file data into array
	for(int i= 0; i< arraySize; i++)
			myFile >> array[i];

	//call bubblesort to sort the int array
	bubbleSort(array,arraySize);

	//display the sorted array
	for(int i= 0; i < arraySize; i++)
			cout << array[i] << endl;

//*********************************
	cout << "\n \n";
//*********************************

	//create new array dynamically
	int newArray = 10;
	int * pracArray;
	pracArray = new int[newArray];

	//copy the old array into the new array
	for(int i= 0;i< arraySize; i++)
			pracArray[i] = array[i];

	//entering data into the new indexes of the new array
	for(;arraySize < newArray; arraySize++){
		cout << "Enter an int into index " << arraySize << ": "; cin >> pracArray[arraySize];
	}

	//call bubblesort to sort the int array
	bubbleSort(pracArray,newArray);

	//display the sorted data
	for(int i= 0;i< newArray; i++)
			cout << pracArray[i] << endl;

	//delete the dynamically allocated array
	delete pracArray;
}

void bubbleSort(int array[], int arraySize){
//nested for loop, if nestedindex > index+1 then swap, continue iterating
//then go to next index and repat till sorted
	for(int inc = 0; inc < arraySize -1; inc++){
		for(int nestInc = 0; nestInc < arraySize-inc-1; nestInc++){
			if(array[nestInc] > array[nestInc + 1]){
				int temp = array[nestInc];
				array[nestInc] = array[nestInc+1];
				array[nestInc+1] = temp;
			}
		}
	}
}
