#include <iostream>

using namespace std;

class BankDeposit{
    int principle;
    int years;
    float rate_of_interest;
    public:

        BankDeposit(){}
        BankDeposit(int p, int y, double roi){

            principle = p;
            years = y;
            rate_of_interest = roi;

        }
        BankDeposit(int p, int y, int roi){

            principle = p;
            years = y;
            rate_of_interest = float(roi)/100;

        }


        void finalAmount();
};

void BankDeposit :: finalAmount(){
    int prin, year;
    float r;
    double final_amount;

    prin = principle;
    year = years;
    r = rate_of_interest;

    for (int i = 0; i < year; i++)
    {
        final_amount = prin * (1+r);
    }
    final_amount = double(final_amount);
    cout<<final_amount;

}

int main(){

    BankDeposit bd1(300000, 1, 0.067);
    bd1.finalAmount();

    return 0;
}