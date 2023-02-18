#include<iostream>

using std::cout;

int main()
{
    auto num = 0;
    int &num_ref = num;

    cout<<"Num is: "<<num<<"\n";
    cout<<"Stack address of num: "<<&num<<"\n";

    return 0;
}