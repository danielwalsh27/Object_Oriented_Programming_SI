//This was not something I had the students do on the whiteboard, I gave
//them printouts and walked through the code with them. In this Program we'll
//use Inheritance. This copies all items from the parent ('base)' class and gives
//them to the child('derived') class

#include <iostream>
using namespace std;

//Person is the Base class
//other classes will take Person as their base class
class Person{
private:
	int height, weight, age;
public:
	Person() { height = 0, weight = 0, age = 0; }		//default constructor
	Person(int hei, int wei, int ag)						//parameterized constructor
	:height(hei), weight(wei), age(ag){}					//initializing variables
	int getHei() const 	 	{ return height;}			//getters
	int getWei() const	 	{ return weight;}
	int getAge() const 	 	{ return age;}
	void setHei(int hei) 	{ height = hei;}				//setters
	void setWei(int wei) 	{ weight = wei;}
	void setAge(int ag) 		{ age = ag;}
};

//Employee is the Derived class of Person
//Publicly inheriting Person
class Employee : public Person{
private:		//this only has two member variable but inherits height weight and age from person
	int empNum;
	string department;
public:
	Employee() { Person(), empNum = 0, department = "";	} 	//calls Person default constructor
	Employee(int hei, int wei, int ag, int empN, string dep)	//passes in height, weight and age as parameters
	:Person(hei, wei, ag), empNum(empN), department(dep){}	//initializes through Person parameterized constructor

// This Class inherits the following functions from Person Class:
	//int getHei() const 	 	{ return height;}
	//int getWei() const	 		{ return weight;}
	//int getAge() const 	 	{ return age;}
	//void setHei(int hei) 		{ height = hei;}
	//void setWei(int wei) 		{ weight = wei;}
	//void setAge(int ag) 		{ age = ag;}
	int getNum() const  		{ return empNum;}				//getters
	string getDep() const 	{ return department;}
	void setNum(int eNum) 	{ empNum = eNum;}				//setters
	void setDep(string dep) 	{ department = dep;}
};

//Student is the Derived class of Person
//Publicly inheriting Person
class Student : public Person{
private:
	int CWID;
	string major;
public:
	Student() { Person(), CWID = 0, major = ""; }			//calls Person default constructor
	Student(int hei, int wei, int ag, int cwid, string maj)	//passes in height, weight and age as parameters
	:Person(hei, wei, ag), CWID(cwid), major(maj){}			//initializes through Person parameterized constructor

// This Class inherits the following functions from Person Class:
	//int getHei() const 	 	{ return height;}
	//int getWei() const	 		{ return weight;}
	//int getAge() const 	 	{ return age;}
	//void setHei(int hei) 		{ height = hei;}
	//void setWei(int wei) 		{ weight = wei;}
	//void setAge(int ag) 		{ age = ag;}
	int getCWID() const		{ return CWID;}					//getters
	string getMaj() const 	{ return major;}
	void setCWID(int cwid) 	{ CWID = cwid;}					//setters
	void setMaj(string maj) 	{ major = maj;}
};

int main(){
	Person Ean(71,180,20);
	Employee May(70,150,29,72514,"Computer Science");
	Student Isaac(71,185,21,23432, "Game of Thrones");
	cout << Ean.getAge() << endl;
	cout << May.getHei() << endl;
	cout << Isaac.getWei() << endl;

}
