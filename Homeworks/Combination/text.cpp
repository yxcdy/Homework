#include <iostream>
#include "combination.h"
using namespace std;

int main(){
	int m,n;
	double result;
	while(1){
		cout<<"你好！这是组合公式计算程序"<<endl;
		cout<<"请依次输入m,n  表示从m个取n个"<<endl;
		cin>>m>>n;
		cout<<"计算结果是"<<combination(m,n)<<"\n"<<endl;

	}
}