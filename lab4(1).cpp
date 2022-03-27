
#include <iostream>
#include<string>
using namespace std;

class House
{
    public:
    int number , price;
    string city ,street;
    
    double propertytax(double tax){
       cout<<"tax   "<< price * (tax/100)<<"\n";
    }
    void printl(){
        cout<<"number "<<number<<"\n";
        cout<<"price "<<price<<"\n";
        cout<<"city  "<<city<<"\n";
        cout<<"street "<<street<<"\n";
        //cout<<"tax   "<<propertytax<<"\n";
    }
    
};
int main()
{
    House ob;
    ob.number=2020;
    ob.price=200000;
    ob.city= "san diego";
    ob.street="main";
    ob.propertytax(5);
    ob.printl();
    
    House *ptr;
    ptr=&ob;
    ptr->number=1540;
    ptr->price=153000;
    ptr->city= "portland";
    ptr->street="tula";
    ptr->propertytax(8);
    ptr->printl();
    
    return 0;
}
