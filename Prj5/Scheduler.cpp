/*
Simon Sharudin
CS 331 - Project 5
Due: June 23, 2015
*/

#include "Scheduler.h"

using namespace std;

Scheduler::Scheduler(){
	
}

Scheduler::~Scheduler(){

}

/*
Inserts newMemo into the Ordlist, 'memos'.
*/
void Scheduler::insertMemo(Memo newMemo){
	memos.insert(newMemo);
}

void Scheduler::deleteMemo(char * time){
	string hourstr = "";
	string minutestr = "";
	int hour;
	int minute;
	char * delimit = ":";
	int key = 0;
	bool flag = false;

	// Split into hour and minute pieces
	for (int i = 0; time[i] != '\0'; i++){
		if (time[i] == ':'){
			flag = true;
			i++;
		}

		if (!flag){
			hourstr += time[i];
		}
		else{
			minutestr += time[i];
		}
	}

	// Convert to integer and determine key value
	hour = stoi(hourstr);
	minute = stoi(minutestr);
	key = hour * 100 + minute;

	// ======================================================================================================== in progress
	// Reference getKey() method in the Memo class.
	// If an appointment is scheduled at the given time, delete the appointment (memo) from the Ordlist.
	// If there is no schedule at that time, print out a message saying there isn't an appointment at that time.
	Memo m;
	memos.gotoBeginning();

	do{
		m = memos.retrieve();
		if (m.getKey() == key){
			memos.remove();
			break;
		}
	} while (memos.gotoNext());
}

/*
Read memos from the given file and inserts memo objects into the Ordlist in ascending order.
If the given name file does not exist, print out an error message.
*/
void Scheduler::readMemos(char filename[]){
	char time[6];
	char title[41];

	// Attempt to open the file
	ifstream infile;
	infile.open(filename, ifstream::in);

	if (infile.is_open()){
		while (!infile.eof()){
			infile.getline(time, 6);
			infile.getline(title, 41);

			Memo theMemo(time, title);
			memos.insert(theMemo);
		}
	}
	else{
		cout << "Error opening file." << endl;
	}
}

/*
Write all memos in current Ordlist to the given file.
*/
void Scheduler::writeMemos(char filename[]){
	// Open the file for writing
	ofstream outfile;
	outfile.open(filename, ofstream::app);

	if (outfile.is_open()){
		Memo m;

		if (memos.empty()){
			outfile << "No schedule for today." << endl;
			return;
		}

		memos.gotoBeginning();
		do{
			m = memos.retrieve();
			outfile << m.getTime() << " => " << m.getTitle() << endl;
		} while (memos.gotoNext());
	}

	outfile << "\n\n";
	outfile.close();
}

/*
Print out all memos in current Ordlist to the standard output.
Each memo should be displayed in the following format:
	Time => Appointment info
If there is no memo in the Ordlist, print out a message: 'No scheduler for today.'
*/
void Scheduler::displayMemos(){
	Memo m;

	if (memos.empty()){
		cout << "No schedule for today." << endl;
		return;
	}

	memos.gotoBeginning();
	do{
		m = memos.retrieve();
		cout << m.getTime() << " => " << m.getTitle() << endl;
	} while (memos.gotoNext());

}

/*
Reads the memos in the given name file, 'filename'. 
Merges them into this Ordlist.
After the operation, all elements should be maintained in ascending order.
*/
void Scheduler::mergeMemos(char filename[]){
	readMemos(filename);
}

/*
Delete all memos in the Ordlist. --------- not done
*/
void Scheduler::clearMemos(){
	Memo m;

	do{
		memos.gotoBeginning();
		m = memos.retrieve();
		deleteMemo(m.getTime());
	} while (memos.gotoNext());
	memos.gotoBeginning();
	m = memos.retrieve();
	deleteMemo(m.getTime());
}