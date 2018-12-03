#include <iostream>
using namespace std;

class Person{
private:
	int height, weight, age;
public:
	Person(){
		height = 0, weight = 0, age = 0;
	}
	Person(int hei, int wei, int ag)
	:height(hei), weight(wei), age(ag){}
	int getHei() { return height;}
	int getWei() { return weight;}
	int getAge() { return age;}
	void setHei(int hei) { height = hei;}
	void setWei(int wei) { weight = wei;}
	void setAge(int ag) { age = ag;}
};

class Employee : public Person{
private:
	int empNum;
	string department;
public:
	Employee(){
		Person(), empNum = 0, department = "";
	}
	Employee(int hei, int wei, int ag, int empN, string dep)
	:Person(hei, wei, ag), empNum(empN), department(dep){}
	int getNum() { return empNum;}
	string getDep() { return department;}
	void setNum(int eNum) { empNum = eNum;}
	void setDep(string dep) { department = dep;}
};

class Student : public Person{
private:
	int CWID;
	string major;
public:
	Student(){
		Person(), CWID = 0, major = "";
	}
	Student(int hei, int wei, int ag, int cwid, string maj)
	:Person(hei, wei, ag), CWID(cwid), major(maj){}
	int getCWID() { return CWID;}
	string getMaj() { return major;}
	void setCWID(int cwid) { CWID = cwid;}
	void setMaj(string maj) { major = maj;}
};

int main(){

	Person Ean(71,180,20);
	Employee May(70,150,29,72514,"Computer Science");
	Student Isaac(71,185,21,23432, "Swag Maj #PEEPMYSOUNDCLOUD");
	cout << "Isaac's age is " << Isaac.getAge() << endl;

}
