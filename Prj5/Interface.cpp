/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

#include "Interface.h"

using namespace std;

Interface::Interface(){
	finished = 0;
}

Interface::~Interface() {}

/*
Prompts the user for the next command.
*/
void Interface::getCommand(){
	cout << "Enter a command: ";
	cin >> command;

	executeCommand();
}

/*
Process the user command.
*/
void Interface::executeCommand(){
	cout << endl;

	Memo memo;
	char time[6];
	char title[41];
	char filename[41];

	switch (command){
	case '+':
		cout << "Enter time: ";
		cin >> time;
		cout << endl << "Enter Title: ";
		cin >> title;

		memo.setTime(time);
		memo.setTitle(title);
		s.insertMemo(memo);

		break;
	case '-':
		cout << "Enter time: ";
		cin >> time;

		s.deleteMemo(time);

		break;
	case 'R': case 'r':
		cout << "Enter File Name: ";
		cin >> filename;
		s.readMemos(filename);

		break;
	case 'W': case 'w':
		cout << "Enter File Name: ";
		cin >> filename;
		s.writeMemos(filename);

		break;
	case 'D': case 'd':
		s.displayMemos();

		break;
	case 'M': case 'm':
		cout << "Enter File Name: ";

		break;
	case 'C': case 'c':


		break;
	case 'Q': case 'q':
		finished = 1;
		break;
	case '?':
		cout << "+		:Insert Memo." << endl;
		cout << "-		:Delete Memo." << endl;
		cout << "R, r	:Read Memos from a file." << endl;
		cout << "W, w	:Write Memos to a file." << endl;
		cout << "D, d	:Displays Memos." << endl;
		cout << "M, m	:Merges memos from a file." << endl;
		cout << "C, c	:Clear Scheduler." << endl;
		cout << "Q, q	:Exit the application." << endl;
		cout << "?		:Help (this list)" << endl;

		cout << "Hit RETURN to continue" << endl;

		break;
	default:
		cout << "Invalid command." << endl;
	}
}

/*
Determine if end of execution.
*/
int Interface::done(){
	return finished;
}