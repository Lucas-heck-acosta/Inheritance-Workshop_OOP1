// Workshop 7:
// Name:  Lucas Heck Acosta
// date:  9/15/2022

#ifndef UTILS_H 
#define UTILS_H

namespace sdds
{
	void flushkeys();
	bool ValidYesResponse(char ch);
	bool yes();
	void readCstr(char cstr[], int len);
	int readInt(int min, int max);

}
#endif