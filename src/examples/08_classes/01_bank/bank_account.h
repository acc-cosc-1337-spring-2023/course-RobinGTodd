//bank_account.h
#include<stdlib.h>
#include<iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
friend void show_balance(const BankAccount &account);
friend std::ostream& operator<<(std::ostream& out, const BankAccount &account);

public:
    BankAccount(){get_balance_from_db();}//default constructor
    BankAccount(int b) : balance(b){/*empty code block*/}
    int get_balance() const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);
private:
    int balance{0};//initialize to 0
    void get_balance_from_db();
};

#endif