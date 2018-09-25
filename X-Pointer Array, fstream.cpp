#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream myFile;
	myFile.open("one.txt");
	int array[5];

	for(int i= 0; i< 5; i++){
		myFile >> array[i];
	}

	//sort(array,array+5);

	for(int i= 0;i< 5; i++){
			cout << array[i] << endl;
		}

//*********************************
	cout << "\n \n";
//*********************************

	int * pracArray;
	pracArray = new int[100];	//like int pracArray[100] on the HEAP

	for(int i= 0;i< 5; i++){
			pracArray[i] = array[i];
		}

	for(int i= 0;i< 100; i++){
			cout << pracArray[i] << endl;
		}
}
