#include<iostream>
#include "char.h"

using std::cout;

int main()
{
    auto ch = 'a';
    cout<<"Value of "<<ch<<" in ASCII is "<<get_char_ascci_value(ch)<<"\n";
    return 0;
}