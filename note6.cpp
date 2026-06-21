#include<iostream>

using namespace std;

int main(){

    int a=9;
    int* b = &a; // This in pointer (b is pointing to a)
    int** c = &b; // This in pointer (c is pointing to b)

    // This will give value of variable "a"
    cout<<a<<endl;

    // This will give "b", that is address of "a"
    cout<<b<<endl;

    //  This will value where b is pointing, i.e value at "a"
    cout<<*b<<endl;

    // This will give "c", that is address of "b"
    cout<<c<<endl;

    //  This will value where c is pointing, i.e address of "a"
    cout<<*c<<endl;
    
    //  This will value (where c is pointing---> "b", then where "b" is pointing) i.e value "a"
    cout<<**c<<endl;

    return 0;
}