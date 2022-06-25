#include "Account.h"

Account::Account() 
	:_accountNumber{ 0 }, _name{ "" }, _balance{ 0 }
{
}

Account::Account(int accountNumber, double balance, string name) 
	: _accountNumber{ 0 }, _name{ "" }, _balance{ 0 }
 {
	setAccountNumber(accountNumber);
	setBalance(balance);
	setName(name);
	
	}


Account::Account(const Account& account) 
	: _accountNumber{ account._accountNumber }, _name{account._name}, _balance{account._balance}
{

}


void Account::setAccountNumber(int a) {
	
	_accountNumber = a;
}
void Account::setName(string b) {
	_name = b;
}
void Account::setBalance(double c) {
	
	_balance = c;
}

int Account::getAccountNumber() {
	return _accountNumber;
}

string Account::getName() {
	return _name;
}

double Account::getBalance() {
	return _balance;
}

