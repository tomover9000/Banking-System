#pragma once
class Account
{
private :
	bool isOpen;
	int accountNr;
	double balance;
public :
	Account(int);
	Account(const Account& obj);
	//~Account();
	void open(int);
	void close();
	void deposit(int);
	void withdraw(int);
	void print();
	void intrest(int);
	double checkBal();
	bool checkOpen();
};

