#include <iostream>
#include "combination.h"
using namespace std;

int main(){
	int m,n;
	double result;
	while(1){
		cout<<"��ã�������Ϲ�ʽ�������"<<endl;
		cout<<"����������m,n  ��ʾ��m��ȡn��"<<endl;
		cin>>m>>n;
		cout<<"��������"<<combination(m,n)<<"\n"<<endl;

	}
}