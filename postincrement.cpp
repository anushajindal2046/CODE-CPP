#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = a++;
    cout << "a = " << a <<endl; //4
    cout << "b = " << b << endl; //3
    return 0;
}