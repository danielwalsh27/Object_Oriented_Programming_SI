#include <iostream>
using namespace std;

void print(int i) {
	cout << "Here is int " << i << endl;
	cout << "This is an int" << i << endl;
}
void print(double  f) {
	cout << "Here is float " << f << endl;
}
void print(char c){
	cout << "Here is a char " << c << endl;
}
void print(string s) {
	cout << "Here is string " << s << endl;
}

int main() {

  print(10);
  print(10.10);
  print('A');
  print("SI PRACTICE");


  return 0;
}
