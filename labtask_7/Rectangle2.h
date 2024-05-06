#include <string>

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
    Rectangle(float x, float y);
    ~Rectangle();

    // Accessor methods
    void setLength(float x);
    void setWidth(float y);
    float getLength() const;
    float getWidth() const;

    // Function to calculate area
    float calculateArea() const;
};
