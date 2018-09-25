//create 5 print functions with return type void.
//one int parameter, one double, one char, one string, last one (int,double,char,string)
//write function definitions above main
//in main, call print function and hard-code in the value into the parameter
//create an int, double, char and string. & ask user to fill in each variable
//use print function 5 times to print, passing in the variables the user just filled in


#include <iostream>
using namespace std;

//Last program we used prototypes, this time write the function definition above main
//create 5 print functions with return type void.
//one int parameter, one double, one char, one string, last one (int,double,char,string)
void print(int i){
	cout << "This is an int " << i << endl;
}
void print(double  d){
	cout << "Here is a double " << d << endl;
}
void print(char c){
	cout << "A char is just a single character like " << c << endl;
}
void print(string s){
	cout << "A string is a sentence like this one, " << s << endl;
}
void print(int i, double d, char c, string s){
	cout << "Hi " << s << " " << c <<", this is parameter passing, a double is " <<
			d << ", and an integer is " << i << "." << endl;
}

int main() {
	//in main, call print function and hard-code in the value into the parameter
	print(10);
	print(10.1343);
	print('A');
	print("This is SI for CPSC 121, Object Oriented Programming.");
	print(3, 3.14159, 'W', "Daniel");

	cout << "\n\t***** Now its the students time to practice *****" << endl;

	//create an int, double, char and string. & ask user to fill in each variable
	int funInt; double funDou; char funChar; string funStr;
	cout << "Now you've see how it works, now you can enter in your own variables into those functions. " << endl;
	cout << "\nEnter an Integer: "; cin >> funInt;
	cout << "Enter a Double: "; cin >> funDou;
	cout << "Enter First Letter of Last Name: "; cin >> funChar;
	cout << "Enter Your First Name: "; cin.ignore();

	//reminder from lesson 1, you must use a cin.ignore after cin and before getline
	getline(cin, funStr);			cout << "\n";// more spacing

	//use print function 5 times to print, passing in the variables the user just filled in
	print(funInt);
	print(funDou);
	print(funChar);
	print(funStr);
	print(funInt, funDou, funChar, funStr);

  return 0;
}

//REQUIRED LESSON- We spent about 10-15 minutes covering how function overloading works.
// depending on the parameter being passed in will determine which print to call.
// Quick review on cin.ignore() and when to use it properly
// reminder of how it copies by value, and the names do not have to match, but the values will
