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
	cout << "Enter a command: " << endl;
	cin >> command;

	executeCommand();
}

/*
Process the user command.
*/
void Interface::executeCommand(){
	switch (command){
	case '+':

		break;
	case '-':

		break;
	case 'R': case 'r':
		cout << "Enter File Name: " << endl;

		break;
	case 'W': case 'w':
		cout << "Enter File Name: " << endl;

		break;
	case 'D': case 'd':

		break;
	case 'M': case 'm':
		cout << "Enter File Name: " << endl;

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