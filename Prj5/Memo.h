#ifndef MEMO_H
#define MEMO_H

class Memo
{
public:
	// Constructor
	Memo();

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