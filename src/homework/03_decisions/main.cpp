//write include statements
#include "decisions.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	auto option = 0;
	int grade = 0;
	std::string result;

	cout<<"MAIN MENU\n \
	1-Letter grade using if\n \
	2-Letter grade using switch\n \
	3-Exit\n";

	cin>>option;

	switch (option) 
	{
		case 1:
			cout<<"Enter a numeric grade: \n";
			cin>>grade;
			if (grade > 100 or grade < 0)
			{
				cout<<"Entered grade is out of range. Grade must be between 0 and 100 (inclusive)\n";
			}
			else 
			{
				cout<<"Grade is: "<<get_letter_grade_using_if(grade)<<"\n";
			}
			break;
		case 2:
			cout<<"Enter a numeric grade: \n";
			cin>>grade;
			if (grade > 100 or grade < 0)
			{
				cout<<"Entered grade is out of range. Grade must be between 0 and 100 (inclusive)\n";
				
			}
			else 
			{
				cout<<"Grade is: "<<get_letter_grade_using_switch(grade)<<"\n";
			}
			break;
		default: 
			break;
	}

	return 0;
}