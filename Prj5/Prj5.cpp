/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

// Driver

#include "Interface.h"

using namespace std;

int main(){
	Interface app;

	do{
		app.getCommand();
	} while (!app.done());
	cout << "done" << endl;
	return 0;
}