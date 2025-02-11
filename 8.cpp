#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter first integer: ";
    cin>>n1;
    cout<<"Enter second integer: ";
    cin>>n2;

    int temp;
    if (n1 >= 0 && n2 >=0){
        for(int i=1; i<=n1 && i<=n2 ; i++)//1 //3<=54 && 2<=24
        {
            if(n1%i==0 && n2%i==0)
            {
                temp=i;
            }
        }
        cout<<"The Greatest Common Divisor for "<<n1<<" and "<<n2<<" is "<<temp<<endl;
    }
    else{
        cout<<"Invalid Number!";
    }

    return 0;
}
