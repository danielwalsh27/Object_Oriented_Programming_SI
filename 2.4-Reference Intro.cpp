//create 6 prototypes for void functions, 3 are pass by ref, 3 are pass by value
//all of these will take an int, two are addOne, two timesFive, two square
//create an int variable and ask user for int, then display back to user
//call all the functions passing in the var by ref, then make a cout displaying the num after every call
//call all the functions passing in the var by value, then make a cout displaying the num after every call

#include <iostream>
using namespace std;
//create 6 prototypes for void functions, 3 are pass by ref, 3 are pass by value
//all of these will take an int, two are addOne, two timesFive, two square
void RefAddOne(int &);
void RefTimesFive(int &);
void RefSquare(int &);
void addOne(int);
void timesFive(int);
void square(int);

int main(){
	//create an int variable and ask user for int, then display back to user
	int num;
	cout << "Enter an integer: "; cin >> num;
	cout << "Int is " << num << ".\n"<< endl;

	//call all the functions passing in the var by ref, then make a cout displaying the num after every call
	RefAddOne(num);
	cout << "Now the int is " << num << "\n" << endl;
	RefTimesFive(num);
	cout << "Now the int is " << num << "\n" << endl;
	RefSquare(num);
	cout << "Now the int is " << num << "\n" << endl;

	//call all the functions passing in the var by value, then make a cout displaying the num after every call
	addOne(num);
	cout << "Now the int is " << num << "\n" << endl;
	timesFive(num);
	cout << "Now the int is " << num << "\n" << endl;
	square(num);
	cout << "Now the int is " << num << "\n" << endl;

	return 0;
}
void RefAddOne(int &value){
	cout << "We passed by reference to the RefAddOne function." << endl;
	value = value + 1;
}
void RefTimesFive(int &value){
	cout << "We passed by reference to the RefTimesFive function." << endl;
	value = value * 5;
}
void RefSquare(int &value){
	cout << "We passed by reference to the RefSquare function." << endl;
	value = value * value;
}
void addOne(int value){
	cout << "We passed by value to the addOne function." << endl;
	value = value + 1;
}
void timesFive(int value){
	cout << "We passed by value to the timesFive function." << endl;
	value = value * 5;
}
void square(int value){
	cout << "We passed by value to the square function." << endl;
	value = value * value;
}

//REQUIRED LESSON- We'll spent 10 minutes covering pass by reference, and I showed the students how
// access the variables within memory. After we reviewed pass by value, I had the students draw diagrams
// of each showing the difference. We spent another 5 minutes having the students draw out a visual depicition of pointers
