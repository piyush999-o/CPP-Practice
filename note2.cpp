#include <iostream>

using namespace std;

int main(){
    long double raw_no;
    int gif;

    cout<<"Enter the no. you want to get the GIF of: \n";
    cin>> raw_no;
    gif = (int)raw_no;
    
    cout<<"The GIF of ("<<raw_no<<") x 9 number is: "<<gif*9;

    return 0;
}