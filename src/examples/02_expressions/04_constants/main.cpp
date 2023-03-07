#include<iostream>
#include "constants.h"

using std::cout; using std::cin;

int main()
{
    auto radius = 0;
    cout<<PI<<"\n";

    cout<<"Enter the radius: ";
    cin>>radius;

    auto area = get_area_of_circle(radius);
    cout<<"Area is: "<<area<<"\n";

    auto num = 0;
    cout<<"Num is: "<<num<<"\n";

    num += 1;
    cout<<"Num += 1 is: "<<num<<"\n";

    num++; //add 1
    cout<<"num++ is: "<<num<<"\n";
    
    return 0;
}