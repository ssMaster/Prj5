#ifndef INTERFACE_H
#define INTERFACE_H

// Proper include statement(s)
#include <iostream>

class Interface
{
public:
	// Constructor
	Interface();

	// Destructor
	~Interface();

	void getCommand();
	void executeCommand();
	int done();

private:
	// Additional required data field(s)

	char command;
	int finished;
};

#endif