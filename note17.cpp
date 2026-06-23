#include <iostream>

using namespace std;

class Complex{
    int a, b;
    friend Complex complexSum(Complex c1, Complex c2);
    // This is called friend function.
    // The function i assign like this, can have access of Private Data of this Class
    
    public:
        void setData(int int1, int int2){
            a = int1;
            b = int2;
        }
        void printComplex(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};
// If we are going to use function outside class:
Complex complexSum(Complex cn1, Complex cn2){
    Complex cn3;
    cn3.setData((cn1.a+cn2.a), (cn1.b+cn2.b));

    return cn3;
};

int main(){
    Complex c1, c2, c3;
    
    c1.setData(6, 3);
    c1.printComplex();
    
    c2.setData(4, 5);
    c2.printComplex();

    // We have to call like this:
    // c3.complexSum is not valid here, unlike in note16
    c3 = complexSum(c1, c2);
    c3.printComplex();

    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/