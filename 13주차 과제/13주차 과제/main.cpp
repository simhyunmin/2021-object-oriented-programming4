#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include "ClientData.h"
using namespace std;

void outputLine(ostream&, const ClientData&);

int main() {


	ofstream outCredit{ "credit.bin", ios::out | ios::binary };

	ClientData blankClient;

	for (int i{ 0 }; i < 100; i++) {
		outCredit.write(
			reinterpret_cast<const char*>(&blankClient), sizeof(ClientData));
	}
	if (!outCredit) {
		cerr << "File could not be opened." << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Enter account number (1 to 100, 0 to end input)\n? ";

	int accountNumber;
	string lastName;
	string firstName;
	double balance;

	cin >> accountNumber;

	while (accountNumber > 0 && accountNumber <= 100) {

		cout << "Enter lastname, firstname and balance\n? ";
		cin >> lastName;
		cin >> firstName;
		cin >> balance;


		ClientData client{ accountNumber, lastName, firstName, balance };

		outCredit.seekp(
			(client.getAccountNumber() - 1) * sizeof(ClientData));

		outCredit.write(
			reinterpret_cast<const char*>(&client), sizeof(ClientData));

		cout << "Enter account number\n? ";
		cin >> accountNumber;
	}
	outCredit.clear();
	outCredit.seekp(0);

	ifstream inCredit{ "credit.bin", ios::in | ios::binary };

	cout << left << setw(10) << "Account" << setw(16) << "Last Name"
		<< setw(11) << "First Name" << setw(10) << right << " Balance\n";
	 

	ClientData client;

	inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));

	while (inCredit) {
		if (client.getAccountNumber() != 0) {
			outputLine(cout, client);
		}

		inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
	}
	
	return 0;
}

void outputLine(ostream& output, const ClientData& record) {
	output << left << setw(10) << record.getAccountNumber()
		<< setw(16) << record.getLastName()
		<< setw(11) << record.getFirstName()
		<< setw(10) << setprecision(2) << right << fixed
		<< showpoint << record.getBalance() << endl;
}