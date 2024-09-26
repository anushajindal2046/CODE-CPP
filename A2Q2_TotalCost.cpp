#include <iostream>
using namespace std;
int main()
{
    // Input the cost of 1st item
    float pencilcost;
    cout<<"Enter the cost of a pencil : ";
    cin>>pencilcost;
    //Input the cost of 2nd item 
    float pencost;
    cout<<"Enter the cost of a pen : ";
    cin>>pencost;
    //The the cost of third item
    float erasercost;
    cout<<"Enter the cost of an eraser : ";
    cin>>erasercost;
    //Calculate total cost including GST
    float Tcost;
    Tcost = pencilcost + pencost + erasercost;
    cout<<"Total cost of the items is : "<< (Tcost + (0.18 * Tcost));
    return 0;
}