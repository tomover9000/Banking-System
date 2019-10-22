#pragma once
class Account
{
private :
	bool isOpen;
	int accountNr;
	int balance;
public :
	Account(int);
	//~Account();
	void open(int);
	void close();
	void deposit(int);
	void withdraw(int);
	int checkBal();
	bool checkOpen();
};

