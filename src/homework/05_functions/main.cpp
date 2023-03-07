/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/

#include<iostream>
#include "func.h"

using std::cout; using std::cin;

int main() 
{
	auto option = 0;
	string dna;
	cout<<"Welcome to the DNA Analysis tool\n\n";
	
	display_menu();
	cout<<"Enter menu option: ";
	cin>>option;
	cout<<"\n\n";

	switch(option)
	{
		case 1:
			cout<<"Enter DNA string\n";
			cin>>dna;
			cout<<"Result: "<<get_gc_content(dna)<<"\n";
			break;
		case 2:
			cout<<"Enter DNA string\n";
			cin>>dna;
			cout<<"Result: "<<get_dna_complement(dna)<<"\n";
			break;
	}
	

	return 0;
}