#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    long double salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 94;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

/*
    Note:

        Default visibility mode is private
        Public Visibility Mode: Public members of the base class becomes Public members of the derived class
        Private Visibility Mode: Public members of the base class become private members of the derived class
        Private members are never inherited

*/

int main()
{
    Employee piyush(1), rohan(2);
    cout << piyush.salary<<"LPA" << endl;
    cout << rohan.salary<<"LPA" << endl;

    Programmer rawCoder(10);
    cout << rawCoder.languageCode<<endl;
    cout << rawCoder.id<<endl;
    rawCoder.getData();
    
    return 0;
}
