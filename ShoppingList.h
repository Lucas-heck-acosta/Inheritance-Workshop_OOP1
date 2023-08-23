// Workshop 7:
// Name:  Lucas Heck Acosta
// date:  9/15/2022

#ifndef SHOP_LIST_H
#define SHOP_LIST_H

#include "File.h"
#include "Utils.h"



namespace sdds
{
	

	bool loadList();
	void displayList();
	void removeBoughtItems();
	void removeItem(int index);
	bool saveList();
	void clearList();
	void toggleBought();
	void addItemToList();
	void removeItemfromList();
	bool listIsEmpty();

	

}


#endif