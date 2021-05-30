#include<stdio.h>
#include<iostream>
using namespace std;

int calcu(float,float);
int main(){
	//try{
		float inp;
		cout<<"Enter Money to be Converted in USD"<<endl;
		cin>>inp;
		float EUR=0.2,IND=0.8;
		int a;
		cout<<"Enter option of Currency you would like to convert it to"<<endl;
		cout<<"1. Euros"<<endl;
		cout<<"2. Indian Rupees"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"-------------------------------"<<endl;
		cin>>a;
		cout<<"-------------------------------"<<endl;
		while(a!=0){
			switch(a){
				case 1:
					cout<<inp*EUR<<endl;
					break;
				case 2:
					cout<<inp*IND<<endl;
					break;
				default:
					cout<<"INCORRECT CHOICE TRY AGAIN"<<endl;
			}
		cout<<"Enter option of Currency you would like to convert it to"<<endl;
		cout<<"1. Euros"<<endl;
		cout<<"2. Indian Rupees"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"-------------------------------"<<endl;
		cin>>a;
		cout<<"-------------------------------"<<endl;
		}
		cout<<"Thank You"<<endl;	
	//}//catch(Err){
	//	cout<<Err<<endl;
	//}
}
