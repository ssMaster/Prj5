/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

// Driver
#include "Memo.h"
#include <iostream>

using namespace std;

int main(){
	// ================================================== Memo test
	Memo memo("12:00", "Set to midnight");

	cout << "The time is: " << memo.getTime() << endl;
	cout << "The title is: " << memo.getTitle() << endl;

	int key = memo.getKey();
	cout << "Memo key: " << key << endl;

	// =================================================== OrdList test


	return 0;
}