#include "Account.h"
using namespace std;



Account::Account(int accountNumber, const string& name, double balance)
	:_accountNumber{ accountNumber }, _balance{ balance }
{
	setName(name);
}

void Account::setAccountNumber(int accountNumber) {
	_accountNumber = accountNumber;
}
int Account::getAccountNumber() const {
	return _accountNumber;
}

void Account::setName(const string& name) {
	name.copy(_name, name.length());
}
string Account::getName()const {
	return _name;
}

void Account::setBalance(double balance) {
	_balance = balance;
}
double Account::getBalance()const {
	return _balance;
}