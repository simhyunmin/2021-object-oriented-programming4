
#ifndef ACCOUNT_h
#define ACCOUNT_h
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


class Account {
private:
	int _accountNumber;
	double _balance;
	string _name;
public:
	
	Account();
	Account(int accountNumber, double balance, string name);
	Account(const Account& account);
	
	void setAccountNumber(int);
	void setName(string);
	void setBalance(double);

	int getAccountNumber();
	string getName();
    double getBalance();
	
		

};
#endif