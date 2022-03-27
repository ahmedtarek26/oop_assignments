
#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int *ptr;
    cin>>x;
    cin>>y;
    if(x>y){
        ptr=&x;
        cout<<"the max num is ="<<*ptr;
    }
    else{
        ptr=&y;
        cout<<"the max num is ="<<*ptr;
    }
    return 0;
}
