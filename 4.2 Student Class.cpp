  #include <iostream>
//#include <string>
#include <list>
using namespace std;

class Student{
private:
	string fName, lName;
	string address, city, state;
	int zip;
	long CWID, phoneNum;
	string birthDate, email, major;
	double GPA;

	struct Classes{
		string semYear, course;
		char grade;
		double gradePt;
		int crHour;
	};

	list<Classes> myClass;
public:
	Student();
	Student(string fName, string lName, int CWID, string email, string major);
	void loadPartial();
	void printData();
	void loadClasses();
	void printClasses();
	double calcGPA();
};

Student::Student(){
	fName = "", lName = "", address = "", city = " ", state = "", zip = 99999, CWID = 999999999, phoneNum = 9999999999,
			birthDate = "", email = "", major = "", GPA = 0.0;
}
Student::Student(string first, string last, int cwid, string eMail, string maj){
	fName = first; lName = last; CWID = cwid; email = eMail; major = maj;
	address = "", city = " ", state = "", zip = 99999, phoneNum = 9999999999, birthDate = "", GPA = 0.0;
}
void Student::loadPartial(){
	cout << "Hi " << fName << ".\nPlease enter your house number and address: "; getline(cin, address);
	cout << "Enter your city:"; getline(cin,city);
	cout << "Enter your state:"; getline(cin, state);
	cout << "Enter your zip code:"; cin >> zip; cin.ignore();
	cout << "Enter your birthdate (MM/DD/YYYY):"; getline(cin, birthDate);
	cout << "Enter your phone number:"; cin >> phoneNum; cin.ignore();
}
void Student::printData(){
	cout << "Name: " << "\t\t"<< fName << " " << lName;
	cout << "\n\tAddress: " << "\t"<< address << ", " << city << ", " << state << ". "<< zip;
	cout << "\n\tCWID: " << "\t\t"<< CWID;
	cout << "\n\tEmail: " << "\t\t"<< email;
	cout << "\n\tMajor: " << "\t\t"<< major;
	cout << "\n\tPhone Number: " << "\t"<< phoneNum;
	cout << "\n\tDOB: " << "\t\t"<< birthDate;
	cout << "\n\tGPA: " << "\t\t" << calcGPA() << endl;
}
void Student::loadClasses(){
	cout << "\n\tYou are loading classes into your list" << endl;
	char cont = ' ';
	Classes temp;
	do{
		cout << "Enter the Course and Number (CPSC 120): "; getline(cin,temp.course);
		cout << "Enter the Semester and Year (Spring 2017): "; getline(cin, temp.semYear);
		cout << "Enter the grade you received: "; cin >> temp.grade;
		cout << "Enter the course credit hour (3 Credits): "; cin >> temp.crHour;
		if(temp.grade == 'A' || temp.grade == 'a') temp.gradePt = 4.0;
		else if(temp.grade == 'B' || temp.grade == 'b') temp.gradePt = 3.0;
		else if(temp.grade == 'C' || temp.grade == 'c') temp.gradePt = 2.0;
		else if(temp.grade == 'D' || temp.grade == 'd') temp.gradePt = 1.0;
		else if(temp.grade == 'F' || temp.grade == 'f') temp.gradePt = 0.0;
		else cout << "\n\tInvalid Input";
		temp.gradePt = temp.gradePt * temp.crHour;
		myClass.push_front(temp);
		cout << "Another entry?  (Y to continue, N to exit): "; cin >> cont; cin.ignore();
	} while (cont == 'Y' || cont == 'y');
}
void Student::printClasses(){
	cout << "**Classes taken at CSUF are: **" << endl;
	for(list<Classes>::iterator it = myClass.begin(); it != myClass.end(); it ++){
		cout << "\n\tThe course is: \t\t" << it->course << endl;
		cout << "\tThe semester is: \t" << it->semYear << endl;
		cout << "\tThe grade is: \t\t" << it->grade << endl;
	}
}
double Student::calcGPA(){
	double gpa=0;
	int creditTotal=0;
	for(list<Classes>::iterator it = myClass.begin(); it != myClass.end(); it ++){
	//for(auto i : myClass){
		gpa = gpa + it->gradePt;
		creditTotal = creditTotal + it->crHour;
	}
	double ret = gpa / creditTotal;
	return ret;
}
int main(){
	Student Tuffy("Tuffy", "Titan", 888999333, "Tuffy@student.edu", "Computer Science");
	Tuffy.loadPartial();
	Tuffy.loadClasses();
	Tuffy.printData();
	Tuffy.printClasses();
}
