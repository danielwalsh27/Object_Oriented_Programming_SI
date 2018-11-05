#include <iostream>
using namespace std;
//function being passed in my ref that multiplies the number by 16
void times16(int &num){
	num = num * 16;
}
//function that returns the number passed in plus 8
int add8(int num){
	return num + 8;
}
int main(){
	//create an int var, and pass it by ref and by value
	int number = 3;
	times16(number);
	cout << add8(number);

	//which statements are true using boolean operators
	if (number+number < 100 || true) cout << "Will this display\n";
	if (number+number > 100 || true) cout << "Will this display\n";
	if (number+number < 100 && true) cout << "Will this display\n";
	if (number+number > 100 && true) cout << "Will this display\n";
	if (number+number < 100 || false) cout << "Will this display\n";
	if (number+number > 100 || false) cout << "Will this display\n";
	if (number+number < 100 && false) cout << "Will this display\n";
	if (number+number > 100 && false) cout << "Will this display\n";
	else cout << "";

	//whats return true on if statements?
	if(3) cout << "Display? if(3)?\n";
	if(-1) cout << "Display? if(1)?\n";
	if(0) cout << "Display? if(0)?\n";
	else cout << "";

	//when does %3 and %5 satisfy if statement
	for (int i= 1; i < 10; i++){
		if (i % 3 && i % 5)// && i % 3)
			cout << i;
	}


	cout << endl;

	//creating four int arrays and loading with values
	int arr1[10] ,arr2[10], arr3[10], arr4[10];
	for (int i = 0; i < 10; i++){
		arr1[i] = i * 4;
		arr2[i] = arr1[i] + 14;
		arr3[i] = i + 3;
		arr4[i] = arr1[i] + arr3[i];
	}
	//values in array1
	for (int i = 0; i < 10; i++){
		cout << arr1[i] << "\t";
	}
	cout << endl;
	//values in array2
	for (int i = 0; i < 10; i++){
		cout << arr2[i] << "\t";
	}
	cout << endl;
	//values in array3
	for (int i = 0; i < 10; i++){
		cout << arr3[i] << "\t";
	}
	cout << endl;
	//values in array4
	for (int i = 0; i < 10; i++){
		cout << arr4[i] << "\t";
	}

	//load all data into an int temp array
	int holder[(sizeof(arr1)+sizeof(arr2)+sizeof(arr3)+sizeof(arr4))/ sizeof(arr1[0])];
	for (int i = 0; i < 10; i++)
		holder[i] = arr1[i];
	for (int i = 0; i < 10; i++)
		holder[i+10] = arr2[i];
	for (int i = 0; i < 10; i++)
		holder[i+20] = arr3[i];
	for (int i = 0; i < 10; i++)
		holder[i+30] = arr4[i];

	//display the temp array
	for (int i = 0; i < sizeof(holder)/4; i++){
		if (i%10 == 0) cout << "\n";
		cout << holder[i] << "\t";}

	//
	cout << "\n" << sizeof(arr1)/sizeof(arr1[0]);
}

//REVIEW TOPICS:
//How to create functions
//void return type vs int/string
//pass by value/ pass by reference
//boolean operators
//arrays, if statements
//Modulus operators
