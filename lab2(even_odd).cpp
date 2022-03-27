
#include <iostream>
using namespace std;

void even_odd(int w){
    if(w%2==0){
       cout<<"\ntrue";
    }
    else{
        cout<<"\nfalse";
    }
}
    


int main() {
  int x;
  cout<<"write a number\n";
  cin>>x;
  even_odd(x);
   return 0;

}
