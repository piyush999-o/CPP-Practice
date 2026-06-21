#include<iostream>

/*Using Namespace so i do not have to use "std::" befare cout.*/
using namespace std;

int main(){
    int a, b;

    cout<<"Enter no.1 \n";
    cin>>a;
    cout<<"Enter no.2 \n";
    cin>>b;
    
    cout<<"\nSUM: "<< a+b;
    cout<<"\nSUB: "<< a-b;
    cout<<"\nMULTI: "<< a*b;
    cout<<"\nDIV: "<< a/b;
    return 0;
}