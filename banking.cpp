#include<iostream>
using namespace std;

class bank{
	string name,type_account,address;
	int balance;
	public :
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};

void bank :: open_account(){
	cout<<"enter your fullname : "<<Endl;
	cin.ignore();
	getline(cin,name);
	cout<<"enter your complete address "<<endl;
	cin.ignore();
	getline(cin,address);
	cout<<"what type of account do you want to open : "<<endl;
	cin>>type_account;
	cout<<"enter the initial amount you want to deposit :"<<endl;
	cin>>balance;
	cout<<"congratulations your account is created "<<endl;
	
	}
void bank :: deposit_money(){
	int temp;
	cout<<"enter the amount you want to insert :"<<endl;
	cin>>temp;
	balance=balance+temp;
	
	}	

int main(){
	
	
	
	return 0;
}
