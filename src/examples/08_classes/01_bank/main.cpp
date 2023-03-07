#include<iostream>
#include<time.h>
#include "checking_account.h"
#include "atm.h"
#include "savings_account.h"

using std::cout; using std::cin;

int main()
{
	srand(time(NULL));//generate true randoms on each main run execution

	SavingsAccount savings;
	CheckingAccount account;//cust 1

	auto choice = 's';

	cout<<"Use checking or savings?";
	cin>>choice;

	if (choice == 'c')
	{
		cout<<account;
		cout<<account.get_balance()<<"\n";
		show_balance(account);//use the friend free function
		run_menu(account);
	}
	else 
	{
		cout<<savings;
		cout<<savings.get_balance()<<"\n";
		show_balance(savings);//use the friend free function
		run_menu(savings);
	}


	

	return 0;
}