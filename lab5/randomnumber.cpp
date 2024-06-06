
#include <iostream>
using namespace std;

int main() {
    // Seed the random number generatort9
    srand(time(0));
    
    // Generate a random number between 0 and 11
    int n = rand() % 12;
    
    // Output message based on conditions
    if (n <= 0) {
        cout << n << ". Your subscription has expired." << endl;
    } else if (n <= 1) {
        cout << n << ". Your subscription expires within a day!\n Renew now and save 20%!" << endl;
    } else if (n <= 5) {
        cout << n << ". Your subscription expires in " << n << " days\n Renew now and save 10%!" << endl;
    } else if (n <= 10) {
        cout << n << ". Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << n << ". You have an active subscription." << endl;
    }
    
    return 0;
}