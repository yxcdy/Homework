#include <iostream>
#include "power.h"
using namespace std;

int main(){
	long int x;
	unsigned int y;
	while(1){
		cout<<"��ã����ǵݹ����ݼ������"<<endl;
		cout<<"����������x,y  ��ʾ��x��y����"<<endl;
		cin>>x>>y;
		cout<<"��������"<<power(x,y)<<"\n"<<endl;

	}
}