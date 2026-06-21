#include <iostream>

using namespace std;

int main(){
    int age;

    cout<<"Enter Your AGE: \n";
    cin>>age;

    if ((age>0) && (age<=3))
    {
        cout<<"You are Toddler What are you doing here";
    }
    else if ((age>3) && (age<=5))
    {
        cout<<"You are a Baby :)";
    }
    else if ((age>5) && (age<=12))
    {
        cout<<"You are a Just CHILD";
    }
    else if ((age>12) && (age<18))
    {
        cout<<"You are now TEENAGER";
    }
    else
    {
        cout<<"You are ADULT Now...............";
    }
    
    /* We Can use IF ELSE Ladder for multi Range Problem 
    Whereas Switch used for some special Cases..*/

    return 0;
}