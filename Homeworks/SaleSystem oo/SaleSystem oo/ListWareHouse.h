#ifndef LISTWAREHOUSE_H
#define LISTWAREHOUSE_H

#include "MenuItem.h"

#include "WareHouse.h"

class ListWareHouse:public MenuItem{
public:
	ListWareHouse():MenuItem("Check WaraHouse"){}
	bool act(){
		wareHouse.list();
		return false;
	}
};

#endif