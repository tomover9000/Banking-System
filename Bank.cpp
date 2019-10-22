#include "Bank.h"
#include <iostream>
using namespace std;

Bank::Bank() {
	nrAcc = 5;
	openAccounts = 0;
	accounts = new Account*[5];
	for (int i = 0; i < 5; i++) {
		accounts[i] = new Account(1001 + i);
	}
}

Bank::~Bank() {
	cout << "Destructor " << endl;
	for (int i = 0; i < 5; i++) {
		delete[] accounts[i];
	}
	delete[] accounts;
}

void Bank::openAcc(int initSum) {
	if (openAccounts < nrAcc) {
		getUnallocAcc()->open(initSum);
		openAccounts++;
	}
	else {
		cout << "There are already 5 open accounts" << endl;
	}
}

void Bank::checkBalance(int nr) {
	if (accounts[nr - 1001]->checkOpen()) {
		cout <<"Account "<< nr << " has the balance of " << accounts[nr - 1001]->checkBal() << " RON" << endl;
	}
	else {
		cout << "Account is closed" << endl;
	}
}

void Bank::closeAcc(int nr) {
	if (accounts[nr - 1001]->checkOpen()) {
		openAccounts--;
		accounts[nr - 1001]->close();
	}
	else {
		cout << "Account is already closed" << endl;
	}
}

void Bank::deposit(int nr, int amount) {
	int index = nr - 1001;
	accounts[index]->deposit(amount);
}

void Bank::withdraw(int nr, int amount) {
	int index = nr - 1001;
	accounts[index]->withdraw(amount);
}

Account* Bank::getUnallocAcc() {
	for (int i = 0; i < nrAcc; i++) {
		if (!accounts[i]->checkOpen()) {
			return accounts[i];
		}
	}
	return nullptr;
}


