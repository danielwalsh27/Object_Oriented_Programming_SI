#include <iostream>
using namespace std;

int main(){
	//create two arrays, one int, one string
	int intArr[10];
	string stringArr[10];

	//these integers will hold the class and the string will hold the title of the class
	for (int i = 0; i < 5; i++){
		if(i+1 == 1){
			cout << i+1 << "st class for CS majors is CPSC-";
		}
		else if(i+1 == 2){
			cout << i+1 << "nd class for CS majors is CPSC-";
		}
		else if(i+1 == 3){
			cout << i+1 << "rd class for CS majors is CPSC-";
		}
		else{
			cout << i+1 << "th class for CS majors is CPSC-";
		}
		cin >> intArr[i];
		cin.ignore();


		cout << "please enter a match course name: \n";
		getline(cin, stringArr[i]);
	}
	// now lets go through and display our output
	for (int i = 0; i <5; i++){
		cout << "The " << i+1 << " class at for CPSC at CSUF is CPSC-"  << intArr[i] << " and its called " << stringArr[i] << endl;
	}
	return 0;
}
