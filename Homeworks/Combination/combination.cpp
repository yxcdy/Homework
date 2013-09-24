#include "combination.h"

int fac(int n)
{	int result = 1;
	if(n<0)	return -1;
	else    if(n == 0)	return 1;
	while (n>1)
	{	result *= n;
		n--;
	}
	return result;
}

double combination(int m,int n)
{
	double result=fac(m)/(fac(n)*fac(m-n))+0.0;
	return result;

}