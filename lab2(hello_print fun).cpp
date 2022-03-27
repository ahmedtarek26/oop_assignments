
#include <iostream>
#include <string>
using namespace std;
void print(char *x){
    cout<<"Hello "<<x<<"\n";
}
int main()
{
   string s;
   cout<<"enter your name:   ";
   cin>>s;
   print(&s[0]);
    return 0;
}
