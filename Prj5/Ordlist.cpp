/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

#include "Ordlist.h"
#include <iostream>

using namespace std;


//Default constructor
template <class Type, class Key>
Ordlist<Type, Key>::Ordlist(){
	//(*this).insert("c", 0);
}

// Destructor
template <class Type, class Key>
Ordlist<Type, Key>::~Ordlist(){

}

/*
Inserts the item into an appropriate position within a list.
If an element that has the same key as the key of the input item already existed in the list, then
replaces the existing element with the new element.
*/
template <class Type, class Key>
void Ordlist<Type, Key>::insert(Type& item) {
	cout << "Inserting item..." << endl;
	LinkedList::insert(item, 0);

	cout << "Empty value: " << (*this).empty() << endl;
	
	(*this).remove();
	cout << "Empty value: " << (*this).empty() << endl;

}

