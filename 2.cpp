#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter the value of a; ";
    cin>>a;
    cout<<"Enter the value of b; ";
    cin>>b;

    cout<<"Before swapping: a = "<<a<<", b = "<<b<<endl;

    a=a+b;//11
    b=a-b;//5
    a=a-b;//6

    cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
    return 0;
}
