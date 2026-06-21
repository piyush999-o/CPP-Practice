#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a, b, c;

    a=5908;
    b=456;
    c=459005;

    // USING SETW() FROM MANIPULATOR WE CAN SET WIDTH OF CHARACTER AND PUSH TO THE RIGHT
    
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;

    return 0;
}