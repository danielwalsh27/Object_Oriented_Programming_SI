#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
    int x, y;
    string name;

public:
    Point(int x1, int y1, string n) {
    	x = x1;
    	y = y1;
    	name = n;
    }

    // Destructor
    ~Point(){
        cout << "Destructor called " << name << endl;
    }

    // Copy constructor
    Point(const Point &p) {
        cout << "Copy Constructor called " <<endl;
    	x = p.x;
    	y = p.y;
    	//name = p.name;
    }

    // Assignment operator
    Point& operator = (const Point &p){
            cout << "Assignment Operator called " <<endl;
        	x = p.x;
        	y = p.y;
        	return *this;
    }

    int getX()            		{  return x; }
    int getY()            		{  return y; }
};

int main()
{
    Point p1(10, 15,"donut" ); // Normal constructor is called here
    Point p2(20, 30,"bob" ); // Normal constructor is called here


    Point p3(0,0,"cookie");
    Point p4 = p2; // Copy constructor is called here

    p3 = p1;  // Assignment Operator is called here


    // Let us access values assigned by constructors
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << endl;
    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << endl;
    cout << "p3.x = " << p3.getX() << ", p3.y = " << p3.getY() << endl;
    cout << "p4.x = " << p4.getX() << ", p4.y = " << p4.getY() << endl;

    return 0;
}
