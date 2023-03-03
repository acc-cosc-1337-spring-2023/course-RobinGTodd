//write include statements
#include "dna.h"
#include<iostream>

//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
    auto option = 0;
	char exit_conf = 'N';
	cout<<"Let's do math!\n\n";

    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;
		cout<<"\n\n";

		switch(option)
		{
			case 1:
				get_factorial();
				break;
			case 2:
				get_gsd();
				break;
			case 3:
				exit_conf = confirm_exit();
				break;
		}
    }
    while(exit_conf != 'Y');

	return 0;
}