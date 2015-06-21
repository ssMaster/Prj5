#ifndef MEMO_H
#define MEMO_H

#include <string.h>

class Memo
{
public:
	// Constructor
	Memo(char * initialTime, char * initialTitle);

	// Accessors
	char * getTime();
	char * getTitle();

	// Modifiers
	void setTime(char * t);
	void setTitle(char * t);

	int getKey();

private:
	char time[6];
	char title[41];
};

#endif