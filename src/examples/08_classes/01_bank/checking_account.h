//checking_account.h
#include<stdlib.h>
#include<iostream>
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount: public BankAccount
{
public:
    CheckingAccount(){BankAccount::deposit(50);};
    CheckingAccount(int b) : BankAccount(b){};
};

#endif