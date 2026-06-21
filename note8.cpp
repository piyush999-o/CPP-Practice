#include<iostream>

using namespace std;

// Using typedef i can write "com" (or whatever i assign) instead of "struct company"
typedef struct company
{
    int employeeId;
    float salary;
    int lab_no;
} com;

// Use union if want only one thing, more than one can not be defined
union given_age
{
    int age;
    int birth_year;
};


int main(){
    com apple;
    apple.employeeId = 10098;
    apple.salary = 7200000;
    apple.lab_no = 180;

    cout<<apple.salary<<endl;


    union given_age a1;
    a1.age=19;

    cout<<a1.age<<endl;

    // enum will assign the given data as serial no. starting from zero;
    enum body_parts{head, hands, legs, nose};
    body_parts b1 = nose;

    cout<<b1; // This will give output as 3.
    
    return 0;
}