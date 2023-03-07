#include<iostream>

using std::cout;

int main()
{
    auto num = 5;
    auto num1 = 5.5;
    cout <<"Size in bytes int: "<<sizeof(num)<<"\n";
    cout<<"Size in bytes double: "<<sizeof(num1)<<"\n";

    num = 2147483647;
    cout<<"Max value "<<num<<" is: "<<num<<"\n";

    cout<<"Max value + 1: "<<num+1<<"\n";

    return 0;
}