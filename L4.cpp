#include <iostream>
#include "Bank.h"
using namespace std;

int main()
{
	Account acc1(100);
	acc1.open(100);
	acc1.print();
	Account acc2 = acc1;
	acc2.print();
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
		case 'p':
			bank.print();
			break;
		case 'i':
			int in_rate;
			cout << "Intrest_rate: ";
			cin >> in_rate;
			bank.intrest(in_rate);
			break;
		}
	} while (c != 'e');
}



