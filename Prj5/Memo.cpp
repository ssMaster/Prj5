/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

#include "Memo.h"
#include <iostream>

using namespace std;

/*
User defined constructor - creates a new Memo
*/
Memo::Memo(char * initialTime, char * initialTitle){
	strncpy(time, initialTime, 6);
	strncpy(title, initialTitle, 41);
}

char * Memo::getTime(){
	return time;
}

char * Memo::getTitle(){
	return title;
}

void Memo::setTime(char * t){
	strncpy(time, t, 6);
}

void Memo::setTitle(char * t){
	strncpy(title, t, 41);
}

// ====================

/*
Returns the key value of a memo.
A key is created using the formula: hour * 100 + minute
*/

int Memo::getKey(){
	int hour;
	int minute;
	char * delimit = ":";

	// Tokenize the time string to get the separate hour and minute pieces
	hour = atoi(strtok(time, delimit));
	minute = atoi(strtok(NULL, delimit));

	//cout << "Hour is: " << hour << "\tMinue is: " << minute << endl;

	return (hour * 100 + minute);
}

