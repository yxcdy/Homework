#include "WareHouse.h"

#include <iostream>
using namespace std;

WareHouse wareHouse;

WareHouse::~WareHouse(){
	for(auto &computer : computers){
		delete computer;
	}
}

void WareHouse::list()
{
	cout<<"-------WareHouse-------"<<endl;
	cout<<"Model\t"<<"Number"<<endl;

	for(int i=0; i<this->computers.size(); i++){
		cout<<this->computers[i]->getModel()<<"\t"<<this->computers[i]->getTotal()<<endl;
	}
	cout<<"-------WareHouse-------"<<endl;
}

void WareHouse::in(){
	Computer* temp = new Computer;
	temp->input();

	Computer* result = this->find(temp);
	if(result == NULL){
		this->computers.push_back(temp);
	}else{
		result->add(temp->getTotal());
		delete temp;
	}
}

void WareHouse::out(){
	Computer* temp = new Computer;
	temp->input();

	Computer* result = this->find(temp);
	if(result == NULL){
		cout<<"Model Error!"<<endl;
	}else{
		result->sub(temp->getTotal());
	}
}

Computer* WareHouse::find(Computer* computer){

	for(auto &item : computers){
		if(item->equal(computer)){
			return item;
		}
	}
	return NULL;
}