#ifndef ORDLIST_H
#define ORDLIST_H 

// Proper include statement(s)
#include "LinkedList.cpp"

template <class Type, class Key>
class Ordlist : public LinkedList<Type> // Inheritance list
{
public:
	// Constructor
	Ordlist();

	// Destructor
	~Ordlist();

	void insert(Type& item);
	//void merge(const OrdList<Type, Key> other_list);
	int search(Key search_key);
};

#endif