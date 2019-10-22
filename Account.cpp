#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(int number) {
	//Set the default values when calling constructor
	isOpen = false;
	balance = 0;
	accountNr = number;
}

void Account::open(int initAmount) {
	//Opening the account
	isOpen = true;
	balance = initAmount;
	cout << "Account " << accountNr << " opened with the initial ammount of " << balance << " RON" << endl;
}

bool Account::checkOpen() {
	if (isOpen) {
		return true;
	}
	else {
		return false;
	}
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

int Account::checkBal() {
	return balance;
}
