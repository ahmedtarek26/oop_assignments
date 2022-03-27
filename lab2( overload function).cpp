
#include <iostream>

using namespace std;

void Area(double r){
    cout<<"\narea of circle ="<<(3.14*r*r);
}
void Area(int a,int b){
    cout<<"\narea of rectangle ="<<(0.5*a*b);
}
void Area(int a){
    cout<<"\n area of square ="<<(a*a);
}
int main() {
   
   Area(5);
   Area(5,5);
   Area(3.2);
   
   return 0;

}
