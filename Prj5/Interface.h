#ifndef INTERFACE_H
#define INTERFACE_H

// Proper include statement(s)

class Interface
{
public:
	// Constructor
	// Destructor

	void getCommand();
	void executeCommand();
	int done();

private:
	// Additional required data field(s)

	char command;
	int finished;
};

#endif