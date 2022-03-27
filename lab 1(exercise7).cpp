
#include <iostream>

using namespace std;

int main()
{
   int nums[5];
   for (int n=0; n<5; n++){
        cin >> *(nums+n) ;
   }
   for (int n=0; n<5; n++){
        cout<<*(nums+n)<<"\n"<<"num "<<n<<"=";
   }
    return 0;
}
