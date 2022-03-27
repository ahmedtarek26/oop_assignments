
#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int *ptrx=&x;
    int*ptry=&y;
    cin>>x;
    cin>>y;
    cout<<"x ="<<*ptrx<<"\n"<<"y ="<<*ptry<<"\n";
    ptrx=ptry;
    ptry=&x;

    cout<<"afer swapping\n";
    cout<<"x ="<<*ptrx<<"\n"<<"y ="<<*ptry<<"\n";

    
    return 0;
}
