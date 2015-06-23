#ifndef SCHEDULER_H
#define SCHEDULER_H

// Proper include statement(s)
#include "Memo.h"
#include "Ordlist.h"

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
	Ordlist<Memo, int> memos;
};
#endif