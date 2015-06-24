/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

#include "Ordlist.h"
#include <iostream>
#include <string>
#include "Memo.h"

#include <typeinfo>

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
	//cout << "Inserting item..." << endl;
	Memo m = item;

	int r = search(m.getKey());


	//cout << "Inserting memo with key: " << m.getKey() << endl;

	if (r != 1){
		LinkedList<Type>::insert(item, r);
	}
	else{
		(*this).remove();
		LinkedList<Type>::insert(item, -1);
	}



}

template <class Type, class Key>
int Ordlist<Type, Key>::search(Key search_key){
	Memo m;

	if ((*this).empty()){
		//cout << "empty list" << endl;
	}
	else{
		(*this).gotoBeginning();
		m = (*this).retrieve();

		// If head key is greater than input arg search_key...
		if (m.getKey() > search_key){
			//cout << "m is greater" << endl;
			(*this).gotoBeginning();
			return -1;
		}
		else{
			while ((*this).gotoNext()){
				m = (*this).retrieve();

				// If an element with the same key exists in the list...
				if (m.getKey() == search_key){

					//cout << "Duplicate found!" << endl;
					return 1;
				}
			}

			return 0;
		}
	}

	
}