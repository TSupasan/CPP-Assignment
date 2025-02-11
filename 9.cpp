#include <iostream>
using namespace std;
int main()
{

    string st[4] = {"Vithu","Way","Car","Van"};
    int nu[]={1,2,3,4};
    cout<<st[2]<<endl;
    int length = sizeof(st)/sizeof(st[0]);//16//4=4 one date has 4bits
    cout<<"length of st:"<<length;
    return 0;
}
