// Code from:
// Data Structures and Algorithms in C++, Goodrich, Tamassia, and Mount, 2nd Ed., 2011.
//
#pragma once
//#include <stdexcept>
#include <iostream>
using namespace std;
template <typename E> class SLinkedList;	// forward declaration to be used when declaring SNode

template <typename E>
class SNode {					// singly linked list node
public:
	SNode<E> *next;				// next item in the list
	E elem;					// linked list element value
	//friend class SLinkedList<E>; 	//needed if private
};

template <typename E>
class SLinkedList {				// a singly linked list
public:
	SLinkedList();				// empty list constructor
	~SLinkedList();				// destructor
	bool empty() const;			// is list empty?
	E& front();					// return front element
	void addFront(const E& e);		// add to front of list
	void removeFront();			// remove front item list
	int size() const;					// list size
	void reverse();
	void AddAtPosition(const E& e, int index);
	int sum();
	int sumHelper(SNode<E> * ptr, int &currentTotal);
	void printReverse(SNode<E> * ptr);
	void findAndDelete(const E& e);
	void print();
	int findSize(SNode<E> *ptr);

	SNode<E>* head;				// head of the list
private:

	int     n;							// number of items
};

template <typename E>
SLinkedList<E>::SLinkedList(){// :head(NULL), n(0) { }	// An initialization list
	head = NULL;
	n = 0;
}
template <typename E>
bool SLinkedList<E>::empty() const		// is list empty?
{
	return head == NULL; // can also use return (n == 0);
}

template <typename E>
E& SLinkedList<E>::front() 		// return front element
{
	if (empty()) throw length_error("empty list");
	return head->elem;
}

template <typename E>
SLinkedList<E>::~SLinkedList()			// destructor
{
	while (!empty()) removeFront();
}

template <typename E>
void SLinkedList<E>::addFront(const E& e) {	// add to front of list
	SNode<E>* v = new SNode<E>;		// create new node
	v->elem = e;				// store data
	v->next = head;				// head now follows v
	head = v;				// v is now the head
	n++;
}

template <typename E>
void SLinkedList<E>::removeFront() {		// remove front item
	if (empty()) throw length_error("empty list");
	SNode<E>* old = head;			// save current head
	head = old->next;			// skip over old head
	delete old;				// delete the old head
	n--;
}

template <typename E>
int SLinkedList<E>::size() const {				// list size
	return n;
}

template <typename E>
void SLinkedList<E>::reverse() {
    // Requires 3 temporary pointers, previous, current, next
    if (empty()) throw length_error("empty list");
    SNode<E>* p;    // Previous position
    SNode<E>* c;    // Current position
    SNode<E>* n;    // Next position

    p = NULL;   		 // Set p to NULL, initialize previous to before head
    c = head;   		 // Initialize to the front of the list
    		int i = 0;
    while(c != NULL){
   	 n = c->next;    // point n to c->next
   	 c->next = p;    // point c->next to the same location that p is pointing to
   	 p = c;   		// make p point to the same location that c is pointing to
   	 c = n;   		// make c point to the same location that n is point to

   	 cout << "Iteration #" << ++i << endl;
   	 cout << "p =" << p->elem <<endl;
   	 cout << "c =" << c->elem <<endl;
   	 cout << "n =" << n->elem <<endl;
    }
    head = p;   			 // set head to the p, which is our new front}
}

template <typename E>
void SLinkedList<E>::AddAtPosition(const E& e, int index){
	SNode<E>* v = new SNode<E>;		// create new node
	v->elem = e;						// save e to element

	int addPosAfter = index - 1;
	SNode<E>* tempPtr = head;			// save current head
	for(int i = 0; i < addPosAfter; i++){
		tempPtr = tempPtr -> next;
	}
	v->next = tempPtr->next;			// setting ptr next to our new node next
	tempPtr->next = v;				// setting v to next
}

template <typename E>
int SLinkedList<E>::sum(){
	SNode<E>* tempPtr = head;			// save current head
	int totalVal = 0;
	sumHelper(tempPtr , totalVal);
	return totalVal;
}

template <typename E>
int SLinkedList<E>::sumHelper(SNode<E> * ptr, int &currentTotal){
	if(ptr->next == NULL){
		currentTotal = currentTotal + ptr->elem;
		return currentTotal;
	}
	currentTotal = currentTotal + ptr->elem;
	sumHelper(ptr->next,currentTotal);
}

template <typename E>
void SLinkedList<E>::printReverse(SNode<E> *ptr){
	if(ptr == NULL){
		cout << "list is empty" << endl;
		return;
	}
	if(ptr->next != NULL){
		printReverse(ptr->next);
	}
	cout << ptr->elem << endl;
}

template <typename E>
void SLinkedList<E>::findAndDelete(const E& e){
	SNode<E> * ptr = head;
	for(int i = 0; i < n; i++){
		if(ptr->next->elem == e){
			SNode<E> * after = ptr->next;
			ptr->next = after->next;
			delete after;
			n--;
		}
		else{
			ptr = ptr -> next;
		}
	}
}

template <typename E>
void SLinkedList<E>::print(){
	SNode<E> * ptr = head;
	for(int i = 0; i < size(); i++){
		cout << ptr->elem << endl;
		ptr = ptr -> next;
	}
}

template <typename E>
int SLinkedList<E>::findSize(SNode<E> *ptr){
	if(ptr == NULL){ return 0; }

	return 1 + findSize(ptr->next);

}

int main(){
	SLinkedList<int> intList;
	intList.addFront(2); intList.addFront(5);
	intList.addFront(3); intList.addFront(8);
	cout << intList.findSize(intList.head);
}
