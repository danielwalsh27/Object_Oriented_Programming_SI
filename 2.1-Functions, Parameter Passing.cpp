//create four prototypes with return type int, add, subtract, multiply(all have 3 int parameters) and divide with two
//create four more prototypes with void return type. add subtract multiply divide (all w/ 3 int parameters)
//within main, create 3 integers variables, and ask user for 3 numbers
//make 4 cout statements calling the first four functions (call in cout statement)
//call the next four functions, (these will print within the function definition)
//at the bottom (outside of main), write the functions definitions

#include <iostream>
using namespace std;

//These are called prototypes, you can put the whole function here or just he Prototype (functions will be after main)
//Use the return types of int/double for an add/subtract/multiply/divide function calls
//We will have three parameters, except for divide, it will only divide two numbers
int add(int firstNum, int secondNum, int thirdNum);
int subtract(int firstNum, int secondNum, int thirdNum);
int multiply(int firstNum, int secondNum, int thirdNum);
double divide(int firstNum, int secondNum);

//these functions have the void return type, they will not return a value, we will use these functions to print
//divide will take all three parameters
void printAdd(int firstNum, int secondNum, int thirdNum);
void printSubtract(int firstNum, int secondNum, int thirdNum);
void printMultiply(int firstNum, int secondNum, int thirdNum);
void printDivide(int firstNum, int secondNum, int thirdNum);

int main(){
	//create 3 integers variables, and ask user for 3 numbers
	int num1, num2, num3;
	cout << "Please enter 3 numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	cout << "\n\t***** This is with the return values and prints within the cout statement *****\n" << endl;

	//this sentence will call the function and the functions will return the value, it will be placed in the sentence
	cout << "When we add the numbers we get " << add(num1, num2, num3) << endl;
	cout << "When we subtract the numbers we get " << subtract(num1, num2, num3) << endl;
	cout << "When we multiply the numbers we get " << multiply(num1, num2, num3) << endl;
	cout << "When we divide the first number by the second we get " << divide(num1, num2) << endl;
	cout << "When we divide the second number by the third we get " << divide(num2, num3) << "\n" << endl;

	cout << "\t***** This used the void return value and prints from the function itself *****\n" << endl;

	//these functions will be called, then execute all the code within the function, then return to the following line.
	printAdd(num1, num2, num3);
	printSubtract(num1, num2, num3);
	printMultiply(num1, num2, num3);
	printDivide(num1, num2, num3);
	return 0;
}

//when this function is called it will add up the three numbers passed in and return the value
int add(int firstNum, int secondNum, int thirdNum){
	return firstNum + secondNum + thirdNum;
}
//when this function is called it will subtract the three numbers passed in and return the value
int subtract(int firstNum, int secondNum, int thirdNum){
	return firstNum - secondNum - thirdNum;
}
//when this function is called it will multiply the three numbers passed in and return the value
int multiply(int firstNum, int secondNum, int thirdNum){
	return firstNum * secondNum * thirdNum;
}
//notice if we keep this as is, it will truncate the integers even though our return is a double, we must use what's called "Casting"
//when this function is called it will divide the two passed in and return the value
double divide(int firstNum, int secondNum){
	return (double)firstNum / secondNum; // we used a cast of (Double) to fix our int division
}

//These functions use the return value of void. These functions are just used do quick math and print values
void printAdd(int firstNum, int secondNum, int thirdNum){
	cout << "These numbers added up are " << firstNum + secondNum + thirdNum << endl;
}
void printSubtract(int firstNum, int secondNum, int thirdNum){
	cout << "These numbers subtracted are " << firstNum - secondNum - thirdNum << endl;
}
void printMultiply(int firstNum, int secondNum, int thirdNum){
	cout << "These numbers multiplied are " << firstNum * secondNum * thirdNum << endl;
}
void printDivide(int firstNum, int secondNum, int thirdNum){
	cout << "Dividing the first from the second is " << firstNum / (double)secondNum << endl;
	cout << "Dividing the second from the third is " << (double)secondNum / thirdNum << endl;
	cout << "Dividing the third from the first is " << (double)thirdNum / firstNum << endl;
}
//REQUIRED LESSON-We spent 15 minutes covering how to pass parameters and how it passes by value
// I had to draw out how it creates a copy (passing by value), and how it can have to separate
//names (one in main, another in the function used).
// Last we covered casting, which is needed so it doesn't truncate our new numbers within the division function
