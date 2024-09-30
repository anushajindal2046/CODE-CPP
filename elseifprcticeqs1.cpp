#include <iostream>
using namespace std;
int main() {
    int income;
    float tax;
    cout<<"Enter the income (in lakhs) : ";
    cin >> income;

    if(income < 5){
        tax = 0; // 0% tax
    } else if(income <= 10){
        tax = 0.2 * income; // 20% tax

        // For the case if our income is between 12L to 15L 
        // elseif(income >=12 && income <= 15) {}
    }else{
        tax =0.3 * income; // 30% tax
    }
    cout<<"Tax = "<< (tax * 100000)<<endl;
    return 0;
}