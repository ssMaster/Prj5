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


using namespace std;

int main(){
	// ================================================== Memo test
	Memo memo("12:00", "Set to midnight");
	Memo memo2("12:50", "Class begins");
	Memo memo3("13:00", "Class ends");

	
	
	cout << "The time is: " << memo.getTime() << endl;
	cout << "The title is: " << memo.getTitle() << endl;
	
	int key = memo.getKey();
	cout << "Memo key: " << key << endl;
	
	cout << endl << endl;
	
	// =================================================== OrdList test
	//Ordlist<Memo, int> memos;
	//memos.insert(memo);
	//memos.insert(memo2);
	//memos.search(1110);
	
	//memos.search(1250);
	
	// =================================================== Scheduler test
	Scheduler s;
	//s.readMemos("infile1.txt");
	
	s.insertMemo(memo);
	s.insertMemo(memo2);
	s.insertMemo(memo3);
	
	s.displayMemos();
	cout << endl << "=========" << endl << endl;
	
	s.deleteMemo("12:00");

	s.displayMemos();
	cout << endl << "=========" << endl << endl;

	//s.deleteMemo("13:45");
	//s.deleteMemo("12:50");
	



	// =================================================== Interface test

	
	return 0;
}