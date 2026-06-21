#include <iostream>

using namespace std;

int main(){
    // [x], x ---> the no. of block i want to accuire (How many data I can put into it)
    int S_No[7] = {1, 2, 3, 4, 5, 6, 7};
    S_No[9] = 95;

    // cout<<S_No[5];

    for (int i = 0; i < 10; i++)
    {
        cout<<i<<" : "<<S_No[i]<<endl;
    }

    // p is pointer which point array address
    // p -----> (p will have '0' and p+1 will have '1'th and so on) DATA
    // We can't use &S_No for pointer in array, because its wrong
    int* p = S_No;

    for (int j = 0; j < 5; j++)
    {
        cout<<*(p+j)<<endl;
    }
    
    

    return 0;
}