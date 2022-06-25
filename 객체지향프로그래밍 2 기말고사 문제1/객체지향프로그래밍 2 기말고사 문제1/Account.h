#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Account {
private:
	int _accountNumber;
	char _name[15];
	double _balance;
public:
	Account(int accountNumber = 0, const string& name = "", double balance = 0);
	
	void setAccountNumber(int accountNumber);
	int getAccountNumber() const;

	void setName(const string& name);
	string getName()const;

	void setBalance(double balance);
	double getBalance()const;

};

#endif