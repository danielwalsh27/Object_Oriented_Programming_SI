//This is an example of a Polymorphism program.
#include <iostream>
using namespace std;
class Insurance{
public:
	Insurance(double theVal);//		:value(theVal){}
	virtual double calcPrem() const;
	virtual double calcComm() const;
protected:		//if you use private you cannot access 'value' data member in derived classes
	double value;
};

class HomeInsurance: public Insurance{
public:
	HomeInsurance(double theVal);//	 :Insurance(theVal){}
	double calcPrem() const;//		{ return value * 0.002;}
	double calcComm() const;// 		{ return value * 0.002;}
};

class VehInsurance: public Insurance{
public:
	VehInsurance(double theVal);//	 :Insurance(theVal){}
	double calcPrem() const;//		{ return value * 0.05;}
	double calcComm() const;// 		{ return value * 0.005;}
};

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

VehInsurance::VehInsurance(double theVal) :Insurance(theVal){}
double VehInsurance::calcPrem() const 	{ return value * 0.05;}
double VehInsurance::calcComm() const 	{ return value * 0.025;}

LifeInsurance::LifeInsurance(double theVal) :Insurance(theVal){}
double LifeInsurance::calcPrem() const 	{ return value * 0.01;}
double LifeInsurance::calcComm() const 	{ return value * 0.005;}

//creating functions
double calcPre(Insurance *prePointer){
	return prePointer->calcPrem();
}
double calcCom(Insurance *comPointer){
	return comPointer->calcComm();
}
int main(){
	HomeInsurance IsaacsHouse(750000); 	// home valued at $750,000
	LifeInsurance EansLife(1000000);		// life policy at $1,000,000
	VehInsurance JosCar(30000); 			// vehicle valued at $30,000

	cout << "The Home Insurance premium is $" << calcPre(&IsaacsHouse) << " and the commission is $" << calcCom(&IsaacsHouse) << ". " << endl;
	cout << "The Life Insurance premium is $" << calcPre(&EansLife) << " and the commission is $" << calcCom(&EansLife) << ". " << endl;
	cout << "The Vehicle Insurance premium is $" << calcPre(&JosCar) << " and the commission is $" << calcCom(&JosCar) << ". " << endl;
}
