#include <iostream>
#include "TransTemp.h"
using namespace std;

int main(){
	int action;
	double t;
	while(1){
	cout<<"��ã����ǻ��������¶�ת������"<<endl;
	cout<<"��������Ӧ�������ѡ��"<<endl;
	cout<<"1������ת��Ϊ����"<<endl;
	cout<<"2������ת��Ϊ����"<<endl;
	cout<<"0���˳�����"<<endl;
	cin>>action;
	switch(action){
	case 1:{
		cout<<"��������Ҫת�����¶�"<<endl;
		cin>>t;
		 cout<<"�����¶�"<<t<<"ת��Ϊ���Ϻ���"<<ftoc(t)<<"\n"<<endl;break;  }
	case 2:{
		cout<<"��������Ҫת�����¶�"<<endl;
		cin>>t;
		cout<<"�����¶�"<<t<<"ת��Ϊ���Ϻ���"<<ctof(t)<<"\n"<<endl;break ;
		   }
	case 0:{return 0;
		   }
	default:cout<<"�Ƿ����룬������0,1,2����һ��\n"<<endl;}

	}}