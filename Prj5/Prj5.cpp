/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

// Driver
#include "Memo.h"
#include "Ordlist.cpp"
#include "Scheduler.h"
#include <iostream>


using namespace std;

int main(){
	// ================================================== Memo test
	Memo memo("12:00", "Set to midnight");

	cout << "The time is: " << memo.getTime() << endl;
	cout << "The title is: " << memo.getTitle() << endl;

	int key = memo.getKey();
	cout << "Memo key: " << key << endl;
	
	cout << endl << endl;

	// =================================================== OrdList test
	Ordlist<Memo, int> memos;
	
	memos.insert(memo);
	

	// =================================================== Scheduler test
	Scheduler s;
	//s.readMemos("infile1.txt");

	//s.deleteMemo("12:00");
	//s.deleteMemo("13:45");
	//s.deleteMemo("12:50");


	// =================================================== Interface test

	
	return 0;
}