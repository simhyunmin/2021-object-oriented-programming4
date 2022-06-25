#include<iostream>
#include<iomanip>
#include<string>
#include"Account.h"
using namespace std;

int printMenu();
void inputAccount(Account list[]);
void updateAccount(Account list[]);
void addAccount(Account list[]);
void deleteAccount(Account list[]);
void displayInformation(Account list[], int arrSize);
void displayAccount(Account list[], int position);

int main() {
	const int arrSize = 10;
	Account list[arrSize];
	int select = 0;

	while ((select = printMenu())!=6) {
		cout << endl;
		switch (select) {
		case 1:
			inputAccount(list);
			break;

		case 2:
			updateAccount(list);
			break;
		case 3:
			addAccount(list);
			break;
		case 4:
			deleteAccount(list);
			break;

		case 5:
			displayInformation(list, arrSize);
				break;

		default:
			cout << "Incorrect choice." << endl << endl;
			break;
		}
		
	}

	

	return 0;
}

int printMenu() {
	int a = 0;
	cout << "1. input initial information" << endl;
	cout << "2. update an account" << endl;
	cout << "3. add a new account" << endl;
	cout << "4. delete an account" << endl;
	cout << "5. display information" << endl;
	cout << "6. end program" << endl;
	cout << "? ";
	cin >> a;
	return a;
}

void inputAccount(Account list[]) {
	int a = 0;
	double balance = 0;
	string name;
	int arraynumber;
	

	while (true) {
		cout << "Enter account number (1 - 10, 0 to end input): ";
		cin >> a;
		arraynumber = a;
		cin.ignore();     //버퍼에 엔터키가 남아있으므로 geline 함수 실행 부분에서 함수가 실행되지 않고 스킵되는 오류 발생 
		                  //따라서 버퍼를 비워줘야한다.
		if (arraynumber== 0) {
			break;
		}

		if (list[arraynumber -1].getAccountNumber()>0) {
			cout << "Account already exists."<<endl;
			continue;
		}
		
		list[arraynumber - 1].setAccountNumber(arraynumber);
		cout << "Enter name: ";
		getline(cin, name);
		list[arraynumber -1].setName(name);
		cout << "Enter balance: ";
		cin >> balance;
		list[arraynumber -1].setBalance(balance);
	}
	cout << endl;
}

void updateAccount(Account list[]) {
	int a = 0;
	cout << "Enter account number to update (1 - 10): ";
	cin >> a;
	if (list[a - 1].getAccountNumber() == 0) {
		cout << "Account has no information." << endl;
	}
	if (list[a - 1].getAccountNumber()>0) {
	     double b;
		displayAccount(list, a-1);
		cout << "Enter charge (+) or payment (-): ";
		cin >> b;
		list[a - 1].setBalance(list[a - 1].getBalance()+b);
		displayAccount(list, a-1);
		
	}
	cout << endl;
}
void addAccount(Account list[]) {
	int a = 0;
	double balance = 0;
	string name;
	int arraynumber;

	cout << "Enter new account number (1 - 10): ";
	cin >> a;
	arraynumber = a;
	cin.ignore();  //버퍼에 엔터키가 남아있으므로 geline 함수 실행 부분에서 함수가 실행되지 않고 스킵되는 오류가 발생, 따라서 버퍼를 비워줘야한다.
	if (list[arraynumber - 1].getAccountNumber() > 0) {
		cout << "Account already exists." << endl;
	}
	if (list[arraynumber - 1].getAccountNumber() == 0) {
		list[arraynumber - 1].setAccountNumber(arraynumber);
		cout << "Enter name: ";
		getline(cin,name);
		list[arraynumber - 1].setName(name);
		cout << "Enter balance: ";
		cin >> balance;
		list[arraynumber - 1].setBalance(balance);
		displayAccount(list, arraynumber -1);
	}
	cout << endl;

}
void deleteAccount(Account list[]) {
	int a = 0;
	cout << "Enter account number to delete (1 - 10): ";
	cin >> a;
	if (list[a - 1].getAccountNumber() == 0) {
		cout << "Account #" << a << " is empty." << endl<<endl;
	}
	if (list[a - 1].getAccountNumber() > 0) {
		list[a - 1].setAccountNumber(0);
		list[a - 1].setBalance(0);
		list[a - 1].setName("");
		cout << "Account #" << a << " deleted." << endl<<endl;
	}

}

void displayInformation(Account list[], int arrSize) {
	cout << "Accounts information." << endl;
	for (int i = 0; i < arrSize; i++) {
		if (list[i].getAccountNumber()>0) {

			cout << right << setw(2) << setfill('0') << list[i].getAccountNumber() << " ";
			cout<<left<<setfill(' ')<<setw(11)<<list[i].getName()<<right<<setw(7)<<setfill(' ')<<fixed<<setprecision(2)<< showpoint<< list[i].getBalance() << endl;

			
		}
	}
	cout << endl;
}
 
void displayAccount(Account list[], int position) {
	cout << right << setw(2) << setfill('0') << list[position].getAccountNumber() << " ";
	cout<<left<<setfill(' ')<<setw(11)<<list[position].getName()<<right<<setw(7)<<setfill(' ')<<fixed<< setprecision(2)<< showpoint << list[position].getBalance() << endl;
}
