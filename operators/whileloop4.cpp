#include <iostream>
using namespace std;

int main(){
    int x, n;
    while((x != 0)&&(x % 2 == 0)){
        cout <<"Enter an integer between 5 and 10 :" <<endl;
        cin >> n;
        if((n >= 5) && (n <= 10)){
            cout <<"Your input value (" << n <<") has been accepted." <<endl;
        }
        else if((n > 5)&&(n < 10)){
            cout <<"You entered "<< n <<". please enter a number between 5 and 10 "<< endl;
            cin >> n;
        }
        else{
            cout <<"Sorry, you entered an invalid number, please try again." <<endl;
        }

    }
    return 0;
}