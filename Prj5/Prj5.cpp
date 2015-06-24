/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

// Driver
#include "Memo.h"
#include "Ordlist.h"
#include "LinkedList.h"
#include "Scheduler.h"
#include <iostream>

#include "Interface.h"

using namespace std;

int main(){
	Interface app;

	do{
		app.getCommand();
	} while (!app.done());
	
	return 0;
}