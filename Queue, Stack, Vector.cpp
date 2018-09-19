#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main(){
	queue<string> graduate;
	stack<string> undergrad;
	vector<string> kindOfArray;

	string name1, name2;
	cout << "What's your first name?" << endl;
	cin >> name1;
	cout << "What's your last name?" << endl;
	cin >> name2;

	graduate.push(name1);
	graduate.push(name2);
	undergrad.push(name1);
	undergrad.push(name2);
	kindOfArray.push_back(name1);
	kindOfArray.push_back(name2);

	cout << graduate.front() << endl;
	graduate.pop();
	cout << graduate.front() << endl;

	cout << undergrad.top() << endl;
	undergrad.pop();
	cout << undergrad.top() << endl;

	cout << kindOfArray[0] << endl;
	cout << kindOfArray[1] << endl;

	cout << "Hope you enjoy SI " << name1 << " " << name2 << "maybe you'll be an SI leader too!" << endl;
}
