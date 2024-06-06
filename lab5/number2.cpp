#include <iostream>
#include "Rectangle2.h"
using namespace std;

int main() {
    //first rectangle be created
    Rectangle FirstRectangle;

    float length, width;
    cout << "Enter length of FirstRectangle: ";
    cin >> length;
    cout << "Enter width of FirstRectangle: ";
    cin >> width;

    FirstRectangle.setLength(length);
    FirstRectangle.setWidth(width);


    cout << "Area of FirstRectangle: " << FirstRectangle.calculateArea() << endl;

    //newly created rectangle object 
    cout << "Enter length of SecondRectangle: ";
    cin >> length;
    cout << "Enter width of SecondRectangle: ";
    cin >> width;

    Rectangle SecondRectangle(length, width);

    cout << "Area of SecondRectangle: " << SecondRectangle.calculateArea() << endl; 

    return 0;
}
