#include <iostream>
using namespace std;

int y(int x){
 return x * x;
}

int z(int a, int k){
 return a* k;
}
int d(int b, int f){
 return ( b* f)*0.5;
}

int main(){
    int  x, k, a , b, f;

    char n;
    
    do{
    cout<< "Please select the area of the shape to be calculate" << endl;
    cout<<"1. Square"<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. Triangle"<<endl;
    cout<<"4. Quit Program"<<endl << endl;
    cout << "Enter selection : "<<endl;
    cin >> n;

    if (n == '1'){
    cout <<"You have selected Square, please enter size : "<<endl  << endl;
    cin >> x;
    int area = y(x);
    cout << "The Area of Square of size "<<x<<" is: " << area << endl  << endl;
}
else if(n == '2'){
     cout <<"You have selected Rectangle, please enter size : "<<endl  << endl;
    cin >> a; cin >> k;
    int area = z(a, k);

    cout << "The Area of Rectangle with sizes "<<a<<" and "<< k << " is: " << area << endl  << endl;

}
else if(n == '3'){
 cout <<"You have selected Triangle, please enter size : "<<endl  << endl;
    cin >> b; cin >> f;
   int area = d(b, f);

    cout << "The Area of Triangle with sizes "<< b <<" and "<< f <<" is: " << area << endl << endl;
    }
else if(n == '4'){
   // cout << "Quit Program "<< endl; 
    break;
}
    
    else{
        cout << "Your input was: " << n <<" which is an invalid input"<< endl;
        cout << "Please enter a valid input!!!" <<endl << endl;
    
    }


    }while(true);
   return 0;  
        
} 



    
