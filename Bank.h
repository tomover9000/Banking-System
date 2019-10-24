#include "Account.h"

class Bank
{
private :
	//need an array of accounts
	Account** accounts;
	int nrAcc, openAccounts;
public :
	Bank();
	~Bank();
	void openAcc(int);
	void closeAcc(int);
	void checkBalance(int);
	void deposit(int, int);
	void withdraw(int, int);
	void print();
	void intrest(int);
	Account* getUnallocAcc();
};

