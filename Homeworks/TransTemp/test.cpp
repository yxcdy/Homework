#include <iostream>
#include "TransTemp.h"
using namespace std;

int main(){
	int action;
	double t;
	while(1){
	cout<<"你好！这是华氏摄氏温度转换程序"<<endl;
	cout<<"请输入相应序号做出选择"<<endl;
	cout<<"1：华氏转换为摄氏"<<endl;
	cout<<"2：摄氏转换为华氏"<<endl;
	cout<<"0：退出程序"<<endl;
	cin>>action;
	switch(action){
	case 1:{
		cout<<"请输入需要转换的温度"<<endl;
		cin>>t;
		 cout<<"华氏温度"<<t<<"转换为摄氏后是"<<ftoc(t)<<"\n"<<endl;break;  }
	case 2:{
		cout<<"请输入需要转换的温度"<<endl;
		cin>>t;
		cout<<"摄氏温度"<<t<<"转换为华氏后是"<<ctof(t)<<"\n"<<endl;break ;
		   }
	case 0:{return 0;
		   }
	default:cout<<"非法输入，请输入0,1,2其中一个\n"<<endl;}

	}}