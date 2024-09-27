#include <iostream>
using namespace std;
int main()
{
    //Example 1
    cout << (int)('A') << endl; //65

    //Example 2
    float PI = 3.14;
    cout << (int)(PI) << endl; //3

    //Example 3
    cout << ((float)10/3) <<endl; //3.333

    //Example 4
    cout << (char)('A' + 1) <<endl; //B
    return 0;
}