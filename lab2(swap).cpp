
#include <iostream>

using namespace std;

void swap(int &x, int &y){
   
    int temp=x;
    x=y;
    y=temp;
    
}

int main() {
   int x,y;
   cout<<"\nenter 1st num =";
   cin>>x;
   cout<<"\nenter 2nd num =";
   cin>>y;
    cout<<"\nnumbers before swapping\t:";
    cout<< x<<" "<<y;
   swap(x,y);
   cout<<"\n numbers after swapping\t:";
    cout<< x<<" "<<y;
   return 0;

}
