#include <iostream>
using namespace std;
int main()
{
    // we can also use float datatype
    //Input a
    int eng; 
    cout<<"Enter the marks of eng : ";
    cin>>eng;
    //Input b
    int math;
    cout<<"Enter the marks of math : ";
    cin>>math;
    //Input c
    int sci;
    cout<<"Enter the marks of sci : ";
    cin>>sci;
    //Calculate Average marks
    int AvgMarks;
    AvgMarks = (eng + math + sci)/3 ;
    cout<<"Avg Marks = "<<AvgMarks<<endl;
    return 0;
}