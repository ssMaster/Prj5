#ifndef SCHEDULER_H
#define SCHEDULER_H

// Proper include statement(s)
#include "Memo.h"

class Scheduler
{
public:
	// Constructor, destructor
	Scheduler();
	~Scheduler();

	void insertMemo(Memo newMemo);
	void deleteMemo(char *time);
	void readMemos(char filename[]);
	void writeMemos(char filename[]);
	void displayMemos();
	void mergeMemos(char filename[]);
	void clearMemos();

private:
	//OrdList<Memo, int> memos;
};
#endif