#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(int number) {
	//Set the default values when calling constructor
	isOpen = false;
	balance = 0;
	accountNr = number;
}

Account::Account(const Account& obj) {
	isOpen = obj.isOpen;
	balance = obj.balance;
	accountNr = obj.accountNr;
}

void Account::print() {
	cout << "Numar_cont " << accountNr << endl;
	cout << "Balance: " << balance << endl;
}

void Account::open(int initAmount) {
	//Opening the account
	isOpen = true;
	balance = initAmount;
	cout << "Account " << accountNr << " opened with the initial ammount of " << balance << " RON" << endl;
}

bool Account::checkOpen() {
	return isOpen;
}

void Account::intrest(int intrest) {
	balance = balance + balance * ((double)intrest / 100);
	cout << "Intrest " << intrest << "balance " << balance << endl;
}

void Account::close() {
	//Assuming closed accounts are not deleted, they are just marked with a closed tag
	isOpen = false;
	//Emptying account
	balance = 0;
	cout << "Account " << accountNr << " closed and balanced emptied" << endl;
}

void Account::deposit(int amount) {
	if (isOpen) {
		balance += amount;
		cout << "Account " << accountNr << " topped up, new balance: " << balance << " RON" << endl;
	}
	else {
		cout << "Account is not open" << endl;
	}
}

void Account::withdraw(int amount) {
	if (isOpen && amount <= balance) {
		balance -= amount;
		cout << "Account " << accountNr << " has been debited, new balance: " << balance << " RON" << endl;
	}
	else if(!isOpen) {
		cout << "Account is not open" << endl;
	}
	else {
		cout << "Not enough balance" << endl;
	}
}

double Account::checkBal() {
	return balance;
}
