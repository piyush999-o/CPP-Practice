#include <iostream>

using namespace std;

class complex{
    int a, b;
    public:
        void setData(int real_no, int imaginary_no){
            a = real_no;
            b = imaginary_no;

        }
        
        void complexSum(complex cn1, complex cn2){
            a = cn1.a + cn2.a;
            b = cn1.b + cn2.b;

        } 
        // YES!!! We can use complex as parameter inside its own class

        void printData(){
            cout<<"The Complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(5, 2);
    c1.printData();

    c2.setData(9, 6);
    c2.printData();

    c3.complexSum(c1, c2);
    c3.printData();
    return 0;
}