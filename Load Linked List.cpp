#include <iostream>
#include <list>

using namespace std;

void printReverse(list<string>::iterator it, int num, list <string> mylist);
void printForward(list<string>::iterator it, int num, list <string> mylist);

int main() {

	list <string> mylist;
	mylist.push_front("First ");
	mylist.push_front("Battalion ");
	mylist.push_front("Fifth ");
	mylist.push_front("Marine ");
	mylist.push_front("Regiment ");
//	list <string> :: iterator it;
//	for(it = mylist.begin(); it != mylist.end(); it++){
//		cout << *it << endl;
//	}

	printReverse(mylist.begin(), 5, mylist);
	cout << "hi";
	printForward(mylist.begin(), 5, mylist);

}

void printReverse(list<string>::iterator it, int nodeSize, list <string> mylist){

	for (int i = 0;i <= nodeSize; i++){
		if(i == nodeSize - 1){
			cout << *it << endl;
		}
		it++;
	}
	nodeSize--;
	printReverse(mylist.begin(), nodeSize, mylist);
}

void printForward(list <string> ::iterator it, int nodeSize, list<string> mylist){
	for(; it != mylist.end(); it++){
		cout << *it << endl;
	}
}
