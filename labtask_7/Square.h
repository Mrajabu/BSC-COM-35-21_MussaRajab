#pragma once

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        Square(); // Default constructor
        Square(float side); // Overloaded constructor
        ~Square(); // Destructor

        // Accessor methods
        void setSideLength(float side);
        float getSideLength() const;
    };
}
