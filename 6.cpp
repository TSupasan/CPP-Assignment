#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a,b,c,s,Area;

    cout << "Enter the coordinates of the first vertex (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second vertex (x2, y2): ";
    cin >> x2 >> y2;

    cout << "Enter the coordinates of the third vertex (x3, y3): ";
    cin >> x3 >> y3;


    a=sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b=sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    c=sqrt(pow(x1 - x3, 2) + pow(y2 - y3, 2));

    s = (a + b + c) / 2;

    Area=sqrt(s * (s - a) * (s - b) * (s - c));


    cout << "Length of side a: " << a << endl;
    cout << "Length of side b: " << b << endl;
    cout << "Length of side c: " << c << endl;
    cout << "Area of the triangle: " << Area << endl;

    return 0;
}
