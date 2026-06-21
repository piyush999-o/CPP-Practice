#include <iostream>

using namespace std;

// We Have to run Function before main function, known as Function Prototypes
void addEmployee(int e_id, long double e_Salary);

int main(){
    char permission;
    int eId;
    long double eSalary;

    cout<<"Do You want to add employees: \n";
    cin>>permission;
    if ((permission == 'Y') || (permission == 'y'))
    {
        addEmployee(eId, eSalary);
    }
    else if ((permission == 'N') || (permission == 'n'))
    {
        cout<<"Thanks.";
    }
    
    else
    {
        cout<<"Please Check Input and Rerun Programme.";
    }
    

    return 0;
}

void addEmployee(int id, long double salary){
    cout<<"Enter Employee Id: \n";
    cin>>id;
    cout<<"Enter Employee Salary: \n";
    cin>>salary;

    int justified_salary = (int)salary;

    cout<<"Employee "<<id<<" with Salary of "<<justified_salary;
}