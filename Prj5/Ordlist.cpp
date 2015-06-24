/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

#include "Ordlist.h"

using namespace std;


//Default constructor
template <class Type, class Key>
Ordlist<Type, Key>::Ordlist(){

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
	Memo m = item;

	int r = search(m.getKey());

	if (r != 1){
		LinkedList<Type>::insert(item, r);
	}
	else{
		(*this).remove();
		LinkedList<Type>::insert(item, 0);
	}

}

template <class Type, class Key>
int Ordlist<Type, Key>::search(Key search_key){
	Memo m;

	if ((*this).empty()){
		// empty list
		return 0;
	}
	else{
		m = (*this).head->element;

		if (m.getKey() > search_key){
			//cout << m.getKey() << " is greater than the search key: " << search_key << endl;
			(*this).gotoBeginning();
			return -1;
		}
		else if (m.getKey() == search_key){
				
			return 1;
		}
		else{
			while ((*this).gotoNext() && m.getKey() < search_key){
				m = (*this).retrieve();
			}
			return 0;
		}
	}
}

template <class Type, class Key>
void Ordlist<Type, Key>::merge(const Ordlist<Type, Key> other_list){
	other_list.gotoBeginning();
	while (other_list.gotoNext()){
		(*this).insert(other_list.retrieve());
	}
}
