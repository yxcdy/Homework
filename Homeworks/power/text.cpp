#include <iostream>
#include "power.h"
using namespace std;

int main(){
	long int x;
	unsigned int y;
	while(1){
		cout<<"你好！这是递归求幂计算程序"<<endl;
		cout<<"请依次输入x,y  表示求x的y次幂"<<endl;
		cin>>x>>y;
		cout<<"计算结果是"<<power(x,y)<<"\n"<<endl;

	}
}