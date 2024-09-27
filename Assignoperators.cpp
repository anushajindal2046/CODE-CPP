#include <iostream>
using namespace std;
int main()
{
    //Assignment Operators
    int a = 10;
    a += 5; // a = a + 5 => 15
    cout << "+= : " << a <<endl; //15
    a -= 5; // a = a - 5 => 10 ( a = 15 here)
    cout << "-= : " << a << endl; //10 
    a *= 5; // a = a * 5 => 50  (a = 10 here) 
    cout << "*= : "<< a << endl; //50
    a /= 5; // a = a/5 => 2
    cout << "/= : " << a << endl; // (a = 50 here )//10
    return 0;
}