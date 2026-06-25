#include <iostream>

using namespace std;

void pattern5(int n) {
        for(int i=1; i<=n; i++){
            for(int j=n; j>=i; j--){
                cout<<n-j+1;
            }
            cout<<endl;
        }
    }
int main(){
    pattern5(9);
    return 0;
}