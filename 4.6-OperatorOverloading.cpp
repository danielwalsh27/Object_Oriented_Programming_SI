//This was not something I had the students do on the whiteboard, I gave
//them printouts and walked through the code with them. In this Program we'll
//overload the operators. We need to create an object that has numbers as its data members.
//We'll create four operators (+ - * /) and give each a task that must be explained
//in that operators definition.

#include <iostream>
using namespace std;

//Land Object that has length and width for the size of the Plot of Land
class Land{
private:
	float length, width;
public:
	Land()				{length = 0, width = 0;}
	Land(float l, float w) 	{length = l, width = w;}
	void setLen(float l) 	{length = l;}
	void setWid(float w) 	{width = w;}
	float getlen()			{return length;}
	float getwid()			{return width;}
	void display() 			{
		cout << "Length: " << length << "\t\tWidth: " << width << endl;
	}

	//this operator adds two objects together, it will create a temp object
	//then it will add the lengh of that obj with the object being passed in
	Land operator +(Land &obj){
		//the obj being passed in is he second operand
		// C = A + B; ... A is the class called on, B is the Obj being passed in
		// B = (Land &obj)

		Land plot;
		plot.length = length + obj.length;
		plot.width = width + obj.width;
		return plot;
	}
	Land operator -(Land &obj){
		//the obj being passed in is he second operand
		// C = A - B; ... A is the class called on, B is the Obj being passed in
		// B = (Land &obj)

		Land plot;
		plot.length = length - obj.length;
		plot.width = width - obj.width;
		return plot;
	}
	Land operator *(Land &obj){
		Land plot;
		plot.length = length * obj.length;
		plot.width = width * obj.width;
		return plot;

	//plot.width 		= 			width 		* 				obj.width;
	// temp obj^^ 				class obj^^				object passed in^^
	}
	Land operator /(Land &obj){
		Land plot;
		plot.length = length / obj.length;
		plot.width = width / obj.width;
		return plot;

	//plot.width 		= 			width 		/ 				obj.width;
	// temp obj^^ 				class obj^^				object passed in^^
	}
};

int main(){
	int L1, L2, W1, W2;
	cout << "Enter the Length and Width of the FIRST plot of land:  " ;
	cin >> L1 >> W1;
	cout << "Enter the Length and Width of the SECOND plot of land:  " ;
	cin >> L2 >> W2;

	Land plotA(L1,W1);
	Land plotB(L2,W2);

	cout << "\t***PlotA + PlotB***" << endl;
	Land C = plotA + plotB;
	C.display();

	cout << "\t***PlotA - PlotB***" << endl;
	C = plotA - plotB;
	C.display();

	cout << "\t***PlotA * PlotB***" << endl;
	C = plotA * plotB;
	C.display();

	cout << "\t***PlotA / PlotB***" << endl;
	C = plotA / plotB;
	C.display();
}
