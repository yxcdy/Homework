#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>
using namespace std;

class MenuItem{
public:
	MenuItem(string c):caption(c){}
	virtual ~MenuItem(){}
	string getCaption(){
		return caption;
	}
	virtual bool act() = 0;  
private:
	string caption;
};

#endif