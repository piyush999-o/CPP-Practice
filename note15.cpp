#include <iostream>

using namespace std;


class Employee{
    int id;
    static int count;
    // static variable is which can accesible buy all object, countinued from where it ended. until project terminated.
    // it's Default value is 0.
    // we can change the default value where we use :: operator outside class;

    public:
        void setData(void){
            cout<<"Enter the id for"<<endl;
            cin>>id;
            count++;
        }

        void getData(void){
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
        }

    static void getCount(void){
        // cout<<id; // throws an error.
        // We can only use those variable which is static.
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count;

int main(){
    Employee Alex, Deon;

    Alex.setData();
    Alex.getData();
    Alex.getCount();

    Deon.setData();
    Deon.getData();
    Deon.getCount();

    return 0;
}