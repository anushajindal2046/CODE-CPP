#include <iostream>
using namespace std;
int main()
{
    //Input Principal
    float P;
    cout<<"Enter the vakue of Principal : ";
    cin>>P;
    //Input Rate
    float R;
    cout<<"Enter the vakue of Rate : ";
    cin>>R;
    //Input Time
    float T;
    cout<<"Enter the vakue of Time : ";
    cin>>T;
    //Calculate SI
    float SI;
    SI = (P * R * T)/100; 
    cout<<"Simple Interest = "<<SI<<endl;
    return 0;
}