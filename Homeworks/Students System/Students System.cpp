#include "stdafx.h"
#include "iostream"
using namespace std;

struct GradeSystem{	
	char name[20];	
	int number;
	int math;
	int art;
}students[100];

int nameCount = 0;
void list();
void addstudent();
void deletestudent();
void inputgrade();
void input(struct GradeSystem &student);
int find(char* name);

int main(){
	int action;	
	do{		
		cout<<"-----------����-----------"<<endl;
		cout<<"1)�鿴����"<<endl;	
		cout<<"2)���ѧ��"<<endl;	
		cout<<"3)ɾ��ѧ��"<<endl;	
		cout<<"4)¼��ɼ�"<<endl;
		cout<<"5)�˳�"<<endl;
		cin>>action;	
		switch(action){	
		case 1:		
			list();		
			break;		
		case 2:		
			addstudent();
			break;		
		case 3:		
			deletestudent();		
			break;		
		case 4:			
			inputgrade();	
			break;
		case 5:
			break;
		default:			
			cout<<"�������˴���Ĳ˵��������ѡ��";	
		}	
	}while(1);
}

void list(){	
	cout<<"-------����-------"<<endl;
	cout<<"����\t"<<"ѧ��\t"<<"math\t"<<"art"<<endl;
	for(int i=0;i<nameCount;i++){	
		cout<<students[i].name<<"\t"<<students[i].number<<"\t"<<students[i].math<<"\t"<<students[i].art<<endl;
	}
	cout<<"-------����-------"<<endl;
}

void addstudent(){	
	struct GradeSystem student;
	input(student);
	int i = find(student.name);
	if(i == nameCount){	
		strcpy_s(students[i].name , student.name);	
		students[i].number = student.number;	
		nameCount++;	
	}else{	
		students[i].number += student.number;
	}
	cout<<"�Ƿ��������"<<endl;
	        cout<<"1)yes"<<endl;
	        cout<<"2)no"<<endl;
	        int choose;
			cin>>choose;
        	switch (choose)
	       {
			case 1:
	        addstudent();
			break;
			case 2:
				break;
	        default:
		    break;
	        }
}
void deletestudent(){	
	struct GradeSystem student;	
	input(student);	
	int i = find(student.name);
	if(i == nameCount){	
		cout<<"û�������"<<endl;	
	}else{	
		memset(&students[i],0,sizeof(students));
	}
	cout<<"�Ƿ��������"<<endl;
	        cout<<"1)yes"<<endl;
	        cout<<"2)no"<<endl;
	        int choose;
			cin>>choose;
        	switch (choose)
	       {
			case 1:
	        deletestudent();
			break;
			case 2:
				break;
	        default:
		    break;
	        }
}

void inputgrade(){
	struct GradeSystem student;
	input(student);
	int i=find(student.name);
	if(i == nameCount){
		cout<<"nobody"<<endl;
	}else{
	cout<<"math:";
	cin>>student.math;
	students[i].math += student.math;
	cout<<"art:";
	cin>>student.art;
	students[i].art +=student.art;
	}
	cout<<"�Ƿ��������"<<endl;
	        cout<<"1)yes"<<endl;
	        cout<<"2)no"<<endl;
	        int choose;
			cin>>choose;
        	switch (choose)
	       {
			case 1:
	        inputgrade();
			break;
			case 2:
				break;
	        default:
		    break;
	        }
}

void input(struct GradeSystem &student){	
	cout<<"name��";
	cin>>student.name;
	cout<<"number��";
	cin>>student.number;
}

int find(char* name)
{
	int i;
	for(i=0;i<nameCount;i++){	
		if(strcmp(students[i].name,name) == 0){	
			break;		}	
	}	
	return i;
} 