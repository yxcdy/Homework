#ifndef EXIT_H
#define EXIT_H

#include <iostream>
using namespace std;

#include "MenuItem.h"

class Exit:public MenuItem{
public:
	Exit():MenuItem("Exit"){}
	bool act(){
		cout << "Exit£¡" << endl;
		return true;
	}
};

#endif