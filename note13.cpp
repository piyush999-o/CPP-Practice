#include <iostream>
#include <string>

using namespace std;

class binary{
    private:
        string s;
        void check_bin();

    public:
        void read();
        void ones_compliment();
        void display();
};

void binary :: read(){
    cout<<"Enter The Binary: \n";
    cin>>s;
    check_bin();
}

void binary :: check_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '1') && (s.at(i) != '0'))
        {
            cout<<"Please Check Binary.."<<endl;
            exit(0); // This Exit() Function will help to exit programme, if we do not define it then programme still go for display() in this programme. 
        }
    }
}

void binary :: ones_compliment(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
        
    }
    
}


void binary :: display(){
    cout<<"Your Current Binary Is:"<<endl;
    // cout<<s<<endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    
}

int main(){
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}