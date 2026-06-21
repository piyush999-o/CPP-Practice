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
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }

        void getData(void){
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
        }
};

int Employee::count;

int main(){
    Employee Alex, Deon;

    Alex.setData();
    Alex.getData();
    Deon.setData();
    Deon.getData();
    return 0;
}