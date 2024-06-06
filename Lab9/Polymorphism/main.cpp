#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;
int main() {
    Rectangle rect;
    Triangle trgl;
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;
    pPoly1->Setvalues(4,5);
    pPoly2->Setvalues(4,5);
    cout << rect.Area() <<'\n';
    cout << trgl.Area() <<'\n';
    return 0;
}