#include <iostream>
#include "Rectangle2.h"
using namespace std;

int main() {
    // Create an instance of Rectangle using default constructor
    Rectangle firstrectangle;


    float length, width;
    cout << "Enter length of first rectangle: ";
    cin >> length;
    cout << "Enter width of first rectangle: ";
    cin >> width;


    firstrectangle.setLength(length);
    firstrectangle.setWidth(width);

    cout << "Area of first rectangle: " << firstrectangle.calculateArea() << endl;

    // Create another instance of Rectangle using overloaded constructor
    cout << "Enter length of second rectangle: ";
    cin >> length;
    cout << "Enter width of second rectangle: ";
    cin >> width;

    Rectangle secondrectangle(length, width);


    cout << "Area of second rectangle: " << secondrectangle.calculateArea() << endl;

    return 0;
}
