// Print the largest of 3 numbers
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    int b;
    cout<<"Enter the value of b : ";
    cin>>b;
    int c;
    cout<<"Enter the value of c : ";
    cin>>c;

    if(a >= b && a >= c )
    {
        cout<<"a is largest = "<<a<<endl;
    } 
    else if(b >= c && b >= a) 
    {
        cout<<"b is largest = "<<b<<endl;
    }
    else{
        cout<<"c is largest = "<<c<<endl;
    }
    return 0;
}