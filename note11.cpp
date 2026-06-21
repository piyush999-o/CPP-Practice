#include <iostream>

using namespace std;

int factorial(long double x){
    if (x <=1)
    {
        return 1;
    }
    
    return x * factorial(x-1);
}

int fibonacci(long double y){
    if (y<=2)
    {
        return 1;
    }    

    return fibonacci(y-1) + fibonacci(y-2);
    
}

int main (){
    long double a;

    cout<<"Enter number you wan to get factorial of:\n";
    cin>>a;
    int fac = (int)factorial(a);
    int fib = (int)fibonacci(a);

    cout<<"Factorial is: "<<fac<<endl;
    cout<<"Fibonnaci no at that term is: "<<fib<<endl;
    return 0;
}