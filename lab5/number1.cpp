#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {

    Rectangle rect;

    // Input length and width from user
    float length, width;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Set length and width of rect
    rect.setLength(length);
    rect.setWidth(width);

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
