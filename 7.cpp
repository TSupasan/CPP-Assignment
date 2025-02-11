#include <iostream>
using namespace std;
int main()
{
    double side1, side2, side3;


    cout << "Enter the lengths of three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;


    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {

        if (side1 == side2 && side2 == side3) {
            cout << "Triangle Type: Equilateral Triangle" << endl;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "Triangle Type: Isosceles Triangle" << endl;
        }
        else {
            cout << "Triangle Type: Scalene Triangle" << endl;
        }
    }
    else {

        cout << "The given sides do not form a valid triangle" << endl;
    }

    return 0;
}
