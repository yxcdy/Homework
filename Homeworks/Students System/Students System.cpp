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
		cout<<"-----------名单-----------"<<endl;
		cout<<"1)查看名单"<<endl;	
		cout<<"2)添加学生"<<endl;	
		cout<<"3)删除学生"<<endl;	
		cout<<"4)录入成绩"<<endl;
		cout<<"5)退出"<<endl;
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
			cout<<"您输入了错误的菜单项，请重新选择！";	
		}	
	}while(1);
}

void list(){	
	cout<<"-------名单-------"<<endl;
	cout<<"姓名\t"<<"学号\t"<<"math\t"<<"art"<<endl;
	for(int i=0;i<nameCount;i++){	
		cout<<students[i].name<<"\t"<<students[i].number<<"\t"<<students[i].math<<"\t"<<students[i].art<<endl;
	}
	cout<<"-------名单-------"<<endl;
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
	cout<<"是否继续进行"<<endl;
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
		cout<<"没有这个人"<<endl;	
	}else{	
		memset(&students[i],0,sizeof(students));
	}
	cout<<"是否继续进行"<<endl;
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
	cout<<"是否继续进行"<<endl;
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
	cout<<"name：";
	cin>>student.name;
	cout<<"number：";
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