#include <iostream>

using namespace std;

int main(){
    int table_for;

    cout<<"Need 10 times Table of: \n";
    cin>>table_for;

    cout<<"Table of "<<table_for<<" using for loop"<<endl;
    for (int i = 1; i <= 10; i=i+1)
    {
        cout<<i*table_for<<endl;
    }
    
    cout<<"Table of "<<table_for<<" using while loop"<<endl;

    int i=1;
    while(i<=10)
    {
        cout<<i*table_for<<endl;
        i++;
    }
    
    cout<<"Table of "<<table_for<<" using do while loop"<<endl;

    int j=1;
    do
    {
        cout<<j*table_for<<endl;
        j++;
    } while (j<=10);
    
    

    return 0;
}