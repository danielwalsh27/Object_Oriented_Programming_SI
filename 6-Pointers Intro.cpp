//create two variables, one int and an int pointer
//tell the pointer where to point to (address of var1)
//display memory address and actual int
//call the add and square function to get results
#include <iostream>
using namespace std;
int add(int firstVar, int *varPoint);
int mult(int firstVar, int *varPoint);
int main(){
	//create two variables, one int and an int pointer
	int var1;
	int *point;
	cout << "Enter an integer:"; cin >> var1;
	//this is not a traditional assignment, your telling the pointer where to point to (address of var1)
	point = &var1;
	//this will display the memory address of the pointer
	cout << point << endl;
	//by adding the * in front of the pointer we are dereferencing the pointer, displaying var1
	cout << *point<< endl;
	cout << var1<< endl; //&var1 for memory address

	cout << add(var1,point) << endl; //cannot be passed by * (deref of) or & (address of)
	cout << mult(var1,point) << endl;
	return 0;
}
int add(int firstVar, int *varPoint){
	cout << "\nNow we have passed the variable and pointer through the add function" << endl;
	cout << "Dereferencing the pointer "<<firstVar<<" + "<<*varPoint<<" = "<< firstVar+*varPoint<<endl;
	cout << "Not dereferencing the pointer "<<firstVar<<" + "<<varPoint<<" = "<< firstVar+varPoint<<endl;
	return firstVar + *varPoint;
}
int mult(int firstVar, int *varPoint){
	cout << "\nNow we have passed the variable and pointer through the add function" << endl;
	cout << "Dereferencing the pointer "<<firstVar<<" * "<<*varPoint<<" = "<< firstVar**varPoint<<endl;
	cout << "Not dereferencing the pointer "<<firstVar<<" * "<<varPoint<<" = "<< endl; // (firstVar)*(varPoint)<<endl;
	return firstVar * *varPoint;
}
//REQUIRED LESSON- Spent 15 minutes showing how a pointer works on the white-board.
// Explained when its passed by parameter you must add the '*' but when you pass within
// main you dont need to add the '*'.
//Showed examples of how to get the memory address of a variable (&var1)

