#pragma once
#include <iostream>
using namespace std;
class Account {
private:
	long  BankCard;
	string AccountName;
	int PinNumber;
public:
	Account() {
		this->BankCard = 200221;
		this->AccountName = "Asliddin";
		this->PinNumber = 0624;
	}
	Account(int BankCard, string AccountName, int PinNumber) {
		this -> BankCard = BankCard;
		this->AccountName = AccountName;
		this->PinNumber = PinNumber;
	}
	void Display() {
		cout << "Bank Card: " << BankCard << endl;
		cout << "Account Name: " << AccountName << endl;
		cout << "Pin Number: " << PinNumber << endl;

	}
	friend class ATM;

};
class Balance {
	int BalanceInquiry;
	int Withdrawal;
	int Deposit;
public:

	Balance(int b, int w,int d) : BalanceInquiry(b),Withdrawal(w),Deposit(d){}
	void Show1() {
		cout << "Balance Inquiry: " << BalanceInquiry << endl;
		cout << "Withdrawal: " << Withdrawal << endl;
		cout << "Deposit: " << Deposit << endl;

	}
	friend class ATM;
};
class ATM {
	Account account;
	Balance balance;

public:
	ATM(int bankcard,string accountname,int pinnumber,int b,int w, int d) : account(bankcard,accountname,pinnumber) ,balance(b,w,d){}
	void Print() {
		cout << "account info:" << endl;
		account.Display();
		balance.Show1();
	}
};