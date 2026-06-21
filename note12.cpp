#include <iostream>

using namespace std;

class Animal{
    private:
        int legs, tail;
    public:
        char life; // Water, Land, Both, Air
        char fly;
        // This Called the ::::::::: METHODS of CLASS :::::::::::
        void setData(int leg, int tail); // Declaration
        void getData(){
            cout<<legs<<endl;
            cout<<tail<<endl;
            cout<<fly<<endl;
            cout<<life<<endl;
        }
};
// Function Implementation, Setting Private Variable through this function
void Animal :: setData(int leg1, int tail1){
    legs = leg1;
    tail = tail1;

}

int main(){
    Animal Cow;
    Cow.fly = 'N';
    Cow.life = 'L';
    Cow.setData(4, 1);
    Cow.getData();
    return 0;
}