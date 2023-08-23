// Workshop 7:
// Name:  Lucas Heck Acosta
// date:  9/15/2022

#ifndef FILE_H 
#define FILE_H


#include <iostream>
#include "ShoppingRec.h"
namespace sdds
{

	bool openFileForRead();
	bool openFileForOverwrite();
	void closeFile();
	bool freadShoppingRec(ShoppingRec* rec);
	void fwriteShoppintRec(const ShoppingRec* rec);

}	


#endif