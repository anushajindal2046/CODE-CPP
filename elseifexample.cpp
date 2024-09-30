#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks"<<endl;
    cin>>marks;

    if(marks >=90){
        cout <<"A"<<endl;
    }
    else if(marks >=80){ //agar yaha else if ki jagah if use karte toh A and B dono print hote . 
        cout <<"B"<<endl;
    }
    else{
        cout<<"C"<<endl;
    }
    return 0;
}