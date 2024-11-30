#include <iostream>
using namespace std;
int main()
{
    string s1;

    cout<<"Enter any string : ";
    getline(cin,s1);
    int n=s1.length();
    cout<<"Total number of characters in that string : "<<n<<endl;

    s1[7]='S';
    cout<<"Modified string "<<s1<<endl;


    return 0;
}

