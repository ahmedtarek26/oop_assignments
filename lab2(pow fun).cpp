
#include <iostream>
using namespace std;
void power(int x, int y){
     int a = 1;
       for (int i = 1; i <= y; i++) {
        a = a * x;
    }

    cout<<a;
}
int main()
{
    int num;
   
    int pw;

    cout << "Enter a number: ";
    cin >> num;
    cout << "\n";

    cout << "Enter a power : ";
    cin >> pw;
    cout << "\n";
    power(num,pw);
  

    return 0;
}