#ifndef ORDLIST_H
#define ORDLIST_H 

// Proper include statement(s)

template <class Type, class Key>
class OrdList // Inheritance list
{
public:
	// Constructor
	// Destructor

	void insert(Type& item);
	void merge(const OrdList<Type, Key> other_list);
	int search(Key search_key);
};

#endif