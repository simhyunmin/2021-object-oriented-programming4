#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include "Account.h"
using namespace std;

void update(int number);
void add(ofstream& credit, int number);
void deletefun(ofstream& ,int number);
void outputline(int accountNumber, const string& name, double balance);

int main() {

	ifstream information("information.txt", ios::in);
	Account account1;
	Account account2;
	Account account3;
	information.read(reinterpret_cast<char*>(&account1),sizeof(Account));
	information.read(reinterpret_cast<char*>(&account2), sizeof(Account));
	information.read(reinterpret_cast<char*>(&account3), sizeof(Account));
	

	ofstream creditout("credit.bin", ios::out | ios::binary);

	Account blankAccount;

	for (int i{ 0 }; i < 100; i++) {
		creditout.write(reinterpret_cast<const char*>(&blankAccount), sizeof(Account));
	}
	
	creditout.seekp(
		(account1.getAccountNumber() - 1) * sizeof(Account));
	creditout.write(reinterpret_cast<const char*>(&account1), sizeof(Account));

	creditout.seekp(
		(account2.getAccountNumber() - 1) * sizeof(Account));
	creditout.write(reinterpret_cast<const char*>(&account2), sizeof(Account));

	creditout.seekp(
		(account3.getAccountNumber() - 1) * sizeof(Account));
	creditout.write(reinterpret_cast<const char*>(&account3), sizeof(Account));
	
	int select;
	ifstream creditin("credit.bin", ios::in);

	cout << "Accounts information." << endl;

	int accountNumber;
	string name;
	double balance;
	
	while (creditin>>accountNumber>>name>>balance) {
		if (accountNumber != 0) {
			creditin.seekg(sizeof(Account));
			outputline(accountNumber, name, balance);
		}
	}

	cout << endl;

	while (true) {
		int number;
		cout << "1. update an account" << endl;
		cout << "2. add a new account" << endl;
		cout << "3. delete an account" << endl;
		cout << "4. display information" << endl;
		cout << "5. end program" << endl;
		cout << "? ";
		cin >> select;
		cout << endl << endl;

		if (select == 1) {
			Account testaccount2;
				creditin.read(reinterpret_cast<char*>(&testaccount2), sizeof(Account));
			cout << "Enter account number to update(1 - 100):";
			cin >> number;
			if (testaccount2.getAccountNumber() ==0 ) {
				cout << "Account has no information" << endl << endl;
			}
			if (testaccount2.getAccountNumber() != 0) {
				update(number);
			}
		}
		if (select == 2) {
			cout << "Enter new account number(1 - 100): ";
			cin >> number;
			Account testaccount1;
			creditin.seekg(
				(number - 1) * sizeof(Account));
			creditin.read(reinterpret_cast<char*>(&testaccount1), sizeof(Account));

			if (testaccount1.getAccountNumber() != 0) {
				cout << "Account already exists." << endl;
			}

			if (testaccount1.getAccountNumber() == 0) {
				add(creditout, number);
			}

		}
		if (select == 3) {
			Account testaccount;
			cout << "Enter account number to delete(1 - 100): ";
			cin >> number;
			creditin.seekg(
				(number - 1) * sizeof(Account));
			creditin.read(reinterpret_cast<char*>(&testaccount), sizeof(Account));
			if (testaccount.getAccountNumber() == 0) {
				cout << "Account #" << number << " is empty." << endl << endl;
			}
			if (testaccount.getAccountNumber() != 0) {
				deletefun(creditout, number);
			}
		}
		if (select == 4) {
			while (creditin >> accountNumber >> name >> balance) {
				if (accountNumber != 0) {
					creditin.seekg(sizeof(Account));
					outputline(accountNumber, name, balance);
				}
			}
		}
		if (select == 5) {
			break;
		}


		
	}


	return 0;
}

void outputline(int accountNumber, const string& name, double balance) {
	
	cout << setw(3) << right << setfill('0') << accountNumber 
		<<setfill(' ')<<setw(15) << right << name << setw(7) << right << setprecision(2) << balance<<endl<<endl;
	
}

void deletefun(ofstream& credit,int number) {
	credit.seekp(
		(number - 1) * sizeof(Account));
	Account blankaccount;
	credit.write(reinterpret_cast<const char*>(&blankaccount), sizeof(Account));
	cout << "Account #" << number << " deleted." << endl << endl;
}

void add(ofstream& credit, int number) {
	double balance;
	string name;
	cout << "Enter name:";
	cin >> name;
	cout << "Enter balance:";
	cin >> balance;
	Account account{ number, name, balance };
	credit.seekp(
		(number-1)*sizeof(Account)
		);
		credit.write(reinterpret_cast<const char*>(&account), sizeof(Account));
	
		outputline(number, name, balance);


}

void update(int number) {
	double point;
	ofstream credit("credit.bin", ios::app);
	ifstream creditin("credit.bin", ios::in);
	Account account;
	creditin.read(reinterpret_cast<char*>(&account), sizeof(Account));
	credit.seekp(
		(number-1)*sizeof(Account)
		);
	cout << "Enter charge (+) or payment (-):";
	cin >> point;
	account.setBalance(account.getBalance() + point);
	credit.write(reinterpret_cast<const char*>(&account), sizeof(Account));
	outputline(account.getAccountNumber(), account.getName(), account.getBalance());

  

}



