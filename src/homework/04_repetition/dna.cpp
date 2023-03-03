//add include statements
#include "dna.h"
#include<iostream>

using std::cout; using std::cin;

//add function(s) code here
int factorial(int num) 
{
    auto product = 1;

    while (num > 0) {
        product *= num;
        num -= 1;
    }

    return product;
}

int gsd(int num1, int num2) 
{

    while (num1 != num2) 
    {
        if (num1 < num2) 
        {
            std::swap(num1, num2);
        }
        else 
        {
            num1 -= num2;
        }
    }
    return num1;
}

void display_menu()
{
    cout<<"1-Factorial\n";
    cout<<"2-Greatest Common Divisor\n";
    cout<<"3-Exit\n";
}

void get_factorial()
{
    int result = 0;
    auto num = 0;

    cout<<"Enter an integer\n";
    cin>>num;
    cout<<"Result: "<<factorial(num)<<"\n\n";
}

void get_gsd()
{
    int result = 0;
    int num1;
    int num2;

    cout<<"Enter integer 1: \n";
    cin>>num1;
    cout<<"Enter integer 2: \n";
    cin>>num2;

    cout<<"Result: "<<gsd(num1, num2)<<"\n\n";
}

char confirm_exit()
{
    char result;
    cout<<"Are you sure you want to exit? Enter Y or N \n";
    cin>>result;
    cout<<"\n\n";
    return result;
}