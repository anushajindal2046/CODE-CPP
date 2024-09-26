#include <iostream>
#include<iomanip> //header file which is used when we have to increse the precision
using namespace std;
int main()
{
    float PI = 3.14159265359;
    double PI2 = 3.14159265359;
    
    cout<<setprecision(12)<<"PI = "<<PI<<endl; //set precision increases the precision ouf cout
    cout<<setprecision(12)<<"PI2 = "<<PI2<<endl;
    return 0;
}