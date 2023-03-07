#include<iostream>
#include "casting.h"

using std::cout; using std::cin;

int main()
{
    auto dec = 1.5;

    cout<<"Enter a decimal value: ";
    cin>>dec;

    auto result = convert_to_double(10, .5);
    cout<<"Years * rate: "<<result;

    result = convert_double_to_int(dec);
    cout<<"Value is: "<<result<<"\n";

    return 0;
}