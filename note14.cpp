#include <iostream>

using namespace std;

// From Lec-23
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    int no_of_items;
    Shop dukaan;

    cout<<"How many Items you want to enter:"<<endl;
    cin>>no_of_items;

    
    dukaan.initCounter();
    for (int j = 0; j < no_of_items; j++)
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    return 0;
}
