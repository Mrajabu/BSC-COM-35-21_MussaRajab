#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    
    Rectangle x;


    float length, width;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    
    x.setLength(length);
    x.setWidth(width);


    cout << "Area of the rectangle: " << x.calculateArea() << endl;

    return 0;
}
