//create an array to hold 5 sentences
//open the file titled "holds5lines.txt"
//load the array with the 5 sentences from the .txt file
//Print all 5 sentences
//create a file titled "createThisFile.txt"
//reverse load the array into the new file
//since we had extra time we also added an if/else statement to only have 5 total lines in our output file

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//create an array to hold 5 sentences
	string strArr[5];

	//open the file titled "holds5lines.txt"
	ifstream inputFile;
	inputFile.open("1.2-holds5lines.txt");
	
	//load the array with the 5 sentences from the txt file
	for(int i=0; i<5;i++){
		getline(inputFile, strArr[i]);
	}
	inputFile.close();

	//Print all 5 sentences
	for(int i=0; i<5;i++){
		cout << strArr[i] << "\n";
	}

	//create a file titled "createThisFile.txt"
	ofstream outputFile;
	outputFile.open("weWillCreateThisFile.txt");
	
	//reverse load the array into the new file
	for(int i = 4; i >= 0; i--){
		if (i>0)
			outputFile << strArr[i] << endl;
		else
			outputFile << strArr[i];
		//outputFile << strArr[i] << endl; //this works but it'll create an extra line
	}

	//outputFile << strArr[4] << "\n" << strArr[3] << "\n" << strArr[2] << "\n" << strArr[1] << "\n" << strArr[0];
	outputFile.close();
	return 0;
}
//REQUIRED LESSON- We spent 20 minutes teaching how fstream works, more specifically the use of ofstream and ifstream.
//We covered how it has pre-loaded functions like .open() and .close(), and the proper use of them. We also when over that
// ofstream can create a file by the use of the .open() function.

//We must use the attached file "2-holds5lines.txt"
