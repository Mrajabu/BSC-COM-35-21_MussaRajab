#include <iostream>
using namespace std;

void SwapNumbers(int *varA, int *varB) {
    int temp = *varA;
    *varA = *varB;
    *varB = temp;
}

int main(){
int varA = 25;
int varB = 100;
int *myvarA = &varA;
int *myvarB = &varB;
cout << "varA before swap: " << *myvarA << endl; //varA is 25
cout << "VarB before swap: " << *myvarB << endl; //varB is 100
SwapNumbers(&varA, &varB);
cout << "varA after swap: " << *myvarA << endl; //varA is 100
cout << "VarB after swap: " << *myvarB << endl; //varB is 25
return 0;

}