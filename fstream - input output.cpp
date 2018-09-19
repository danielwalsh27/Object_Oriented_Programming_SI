//create an array to hold 5 sentences
//open the file titled "holds5lines.txt"
//load the array with the 5 sentences from the txt file
//
//Print all 5 sentences
//
//create a file titled "createThisFile.txt"
//reverse load the array into the new file


















#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string strArr[5];

	ifstream inputFile;
	inputFile.open("holds5lines.txt");
	for(int i=0; i<5;i++){
		getline(inputFile, strArr[i]);
	}
	inputFile.close();


	for(int i=0; i<5;i++){
		cout << strArr[i] << "\n";
	}


	ofstream outputFile;
	outputFile.open("weWillCreateThisFile.txt");
	for(int i = 4; i >= 0; i--){
		if (i>0)
			outputFile << strArr[i] << endl;
		else
			outputFile << strArr[i];
		//outputFile << strArr[i] << endl;
	}

	//outputFile << strArr[4] << "\n" << strArr[3] << "\n" << strArr[2] << "\n" << strArr[1] << "\n" << strArr[0];
	outputFile.close();
	return 0;
}















/*
	when we get the program completed. we will then notice we created a 6th line in our ouput. Lets make it only 5.

	ofstream outputFile;
	outputFile.open("weWillCreateThisFile.txt");
	for(int i = 4; i >= 0; i--){
	if(i == 0)
		outputFile << strArr[i];
	else
		outputFile << strArr[i] << endl;
	}

	//outputFile << strArr[4] << "\n" << strArr[3] << "\n" << strArr[2] << "\n" << strArr[1] << "\n" << strArr[0];
	outputFile.close();

	return 0;
*/
