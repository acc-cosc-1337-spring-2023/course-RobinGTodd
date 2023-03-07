//bank_account.cpp
#include "bank_account.h"

void BankAccount::get_balance_from_db()
{
    balance = rand() % 10000 + 1;//value between 1 and 10000
}

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

//FREE FUNCTIONS; NOT A CLASS FUNCTION
void show_balance(const BankAccount &account)
{
    std::cout<<"Friend function: "<<account.balance<<"\n";
}

std::ostream& operator<<(std::ostream& out, const BankAccount &account)
{   
    out<<"Operator overload: "<<account.balance<<"\n";    

    return out;
}