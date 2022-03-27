
#include <iostream>

using namespace std;
class stock{
    string name;
    double previousclosingprice;
    double currentprice;
    public:
    stock(string x,double y,double z){
        name=x;
        previousclosingprice=y;
        currentprice=z;
    }
    double getchangepercent(){
        double z;
    z=(((currentprice - previousclosingprice)/100)*100);
    return z;
    }
};
int main(){
    stock b("a",15,25);
    cout<<b.getchangepercent();


    return 0;
}
