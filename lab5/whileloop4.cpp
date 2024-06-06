
#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    string y;
    
    while (true) {
        cout << "Please enter an integer value between 5 and 10: " << endl;
        
        // Read the entire line of input

        getline(cin, y);

      
         // Convert the input string to an integer
         try {
            x = stoi(y);
        } catch (invalid_argument&) {
            cout << "Sorry, you entered an invalid number. Please try again. ";
            continue;
        }
        // Check if the input is between 5 and 10
        if (x < 5 || x > 10) {
            cout << "You entered "<< x <<". ";
            continue;
        }
        
        // If the input is valid, exit the loop
        break;
    }

    cout << "Input value (" << x << ") has been accepted." << endl;
    
    return 0;
   }

