#include "TransTemp.h"

double ctof(double t){
	double f;
	f=t*9/5+32;
	return f;
}

double ftoc(double t){
	double c;
	c=(t+32)*5/9;
	return c;
}