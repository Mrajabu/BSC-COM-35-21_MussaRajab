#include <iostream>
using namespace std;

int main() {
    // Declare and initialize the array of strings
    string x[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"
    };

    // Iterate through the array
    for (const string& y : x) {
        if (y.front() == 'B') {
            cout << y << endl;
        }
    }
    return 0;
}
