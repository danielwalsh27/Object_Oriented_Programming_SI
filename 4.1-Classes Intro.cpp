// I will not be having the students code this up on the white board. Too new for them.
// Create a student class, containing first & last name, major, CWID,
// full address (houseNum, streetName, city, state). & create 3 functions.
// Print, loadData and printAddress.
// In main, create 3 student objects, hardcode first & last name, major and CWID.
// call print, loadData and printAddress on these objects.
// classes are private by default
#include <iostream>
using namespace std;

class Student{
//Access Specifier
public:
	//Data Members
	string fName, lName, major;
	int CWID;

	//Member Functions
	void print(){
		cout << fName <<" "<< lName << ", & he/she is majoring in "<< major << " and their CWID is : " << CWID << endl << endl;
	}

};

class Address{
//Access Specifier
public:
	string streetName, city, state;
	int houseNum;

	//Member Functions
	void loadData(){
			cout << "Enter Street Name: "; getline(cin,streetName);
			cout << "City: "; getline(cin,city);
			cout << "State: "; getline(cin,state);
			cout << "House number: "; cin >> houseNum; // must add cin.ignore()
			cin.ignore();
		}
		void printAddress(){
			cout << houseNum << " " <<  streetName << ", " << city << ", " << state << ". \n" << endl;
		}
};

int main(){
	//create 3 student objects & 1 Address
	Address CSUF;
	Student first;
	Student second;
	Student third;

	CSUF.loadData();
	CSUF.printAddress();

	//hardcode in firstname, lastname, major & CWID. Then call the print func
	first.fName = "Ean";
	first.lName = "Loves SI";
	first.major = "Computer Science";
	first.CWID = 654896768;
	first.print();

	//hardcode in firstname, lastname, major & CWID. Then call the print func
	second.fName = "Isaac";
	second.lName = "Loves SI";
	second.major = "Computer Engineering";
	second.CWID = 326547865;
	second.print();

	//hardcode in firstname, lastname, major & CWID. Then call the print func
	third.fName = "Joe";
	third.lName = "Loves SI";
	third.major = "Undecided";
	third.CWID = 876525689;
	third.print();
}
//REQUIRED LESSONS
//Students will need to be taught classes and the three items within, access specifiers, data members,
// and member functions. I'll touch on the wave-tops of public specifiers (with public we can access
// within main and edit within main) if we use private, we'll need setters and getters
// SECOND REMINDER -- classes are private by default
