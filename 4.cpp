#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double Gravity = 9.81;
    double kg,weight;
    cout<<"Enter the mass in kilograms : ";
    cin>>kg;

    weight=kg*Gravity;
    cout<<"weight= "<<weight<<"kg";

    return 0;


}

