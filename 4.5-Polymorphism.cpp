//This was not something I had the students do on the whiteboard, I gave
//them printouts and walked through the code with them. In this Program we'll
//use Polymorphism and Inheritance. Polymorphism is used through Virutal Functions.
//This allows us to use a simpler function call in main, allowing the object to
//"take multiple forms"

#include <iostream>
using namespace std;

//this class has two "virtual" functions. this HAS TO BE STATED in the base class
//Base class for Inheritance
class Insurance{
public:
	Insurance(double theVal);//		:value(theVal){}
	virtual double calcPrem() const;
	virtual double calcComm() const;
protected:		//if you use private you cannot access 'value' data member in derived classes
	double value;
};

//Inherits Insurance and its two virtual functions
//You can write virtual in from of these if you'd like
class HomeInsurance: public Insurance{
public:
	HomeInsurance(double theVal);//	 :Insurance(theVal){}
	double calcPrem() const;//		{ return value * 0.002;}
	double calcComm() const;// 		{ return value * 0.002;}
};

//Inherits Insurance and its two virtual functions
class VehInsurance: public Insurance{
public:
	VehInsurance(double theVal, int mil);//	 :Insurance(theVal){}
	double calcPrem() const;//		{ return value * 0.05;}
	double calcComm() const;// 		{ return value * 0.005;}

};

//Inherits Insurance and its two virtual functions
class LifeInsurance: public Insurance{
public:
	LifeInsurance(double theVal);//	 :Insurance(theVal){}
	double calcPrem() const;//		{ return value * 0.01;}
	double calcComm() const;// 		{ return value * 0.01;}
};

//two ways of defining. first is above (commented out), second is below (being used)
Insurance::Insurance(double theVal)		: value(theVal){}
double Insurance::calcPrem() const		{ }		//dont need to add 'virtual' to front of definition
double Insurance::calcComm() const		{ }		//dont need to add 'virtual' to front of definition

HomeInsurance::HomeInsurance(double theVal) :Insurance(theVal){}
double HomeInsurance::calcPrem() const 	{ return value * 0.002;}
double HomeInsurance::calcComm() const 	{ return value * 0.0015;}

VehInsurance::VehInsurance(double theVal, int mil) :Insurance(theVal){}
double VehInsurance::calcPrem() const 	{ return value * 0.05;}
double VehInsurance::calcComm() const 	{ return value * 0.025;}

LifeInsurance::LifeInsurance(double theVal) :Insurance(theVal){}
double LifeInsurance::calcPrem() const 	{ return value * 0.01;}
double LifeInsurance::calcComm() const 	{ return value * 0.005;}

//these functions use the "Insurance" type but will call to whatever
//object it was called from
double calcPre(Insurance *prePointer){
	return prePointer->calcPrem();
}
double calcCom(Insurance *comPointer){
	return comPointer->calcComm();
}
int main(){
	HomeInsurance IsaacsHouse(750000); 	// home valued at $750,000
	LifeInsurance EansLife(1000000);		// life policy at $1,000,000
	VehInsurance JosCar(30000,200); 			// vehicle valued at $30,000

	//calling calcPre on the HomeInsurance object, the functions will utilize the virtual functions to locate the HomeInsurance rates
	cout << "The Home Insurance premium is $" << calcPre(&IsaacsHouse) << " and the commission is $" << calcCom(&IsaacsHouse) << ". " << endl;

	//calling calcPre on the LifeInsurance object, the functions will utilize the virtual functions to locate the LifeInsurance rates
	cout << "The Life Insurance premium is $" << calcPre(&EansLife) << " and the commission is $" << calcCom(&EansLife) << ". " << endl;

	//calling calcPre on the CarInsurance object, the functions will utilize the virtual functions to locate the CarInsurance rates
	cout << "The Vehicle Insurance premium is $" << calcPre(&JosCar) << " and the commission is $" << calcCom(&JosCar) << ". " << endl;
}
