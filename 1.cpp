#include <iostream>
using namespace std;
int main()
{
    string color;
    int number;

    cout<<"Enter your favorite color : ";
    getline(cin,color);


    cout<<"Enter your favorite number : ";
    cin>>number;
    cout<<endl;

    cout<<"Your favorite color is "<<color<<",and your lucky number is "<<number<<".";

    return 0;
}

