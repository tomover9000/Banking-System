#include <iostream>
#include "Bank.h"
using namespace std;

int main()
{
	Bank bank;
	char c;
	int sum, nr;
	do {
		cout << "Type of transaction: ";
		cin >> c;
		switch (c)
		{
		case 'o':
			cout << "Introduceti suma initiala: ";
			cin >> sum;
			bank.openAcc(sum);
			break;
		case 'b':
			cout << "Introduceti numarul contului: ";
			cin >> nr;
			bank.checkBalance(nr);
			break;
		case 'd':
			cout << "Introduceti numarul contului: ";
			cin >> nr;
			cout << "Introduceti suma: ";
			cin >> sum;
			bank.deposit(nr, sum);
			break;
		case 'w':
			cout << "Introduceti numarul contului: ";
			cin >> nr;
			cout << "Introduceti suma: ";
			cin >> sum;
			bank.withdraw(nr, sum);
			break;
		case 'c':
			cout << "Introduceti numarul contului: ";
			cin >> nr;
			bank.closeAcc(nr);
			break;
		}
	} while (c != 'e');
}



