
#include <iostream>
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    
    // Generate a random number between 0 and 11
    int n = rand() % 12;
    
    // Output message based on conditions using switch statement
    switch(n) {
        case 0:
            cout << n<< ". Your subscription has expired." << endl;
            break;
        case 1:
            cout << n << ". Your subscription expires within a day!\n Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << n << ". Your subscription expires in " << n << " days\n Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << n << ". Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << n << ". You have an active subscription." << endl;
            break;
    }
    
    return 0;
}