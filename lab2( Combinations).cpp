
#include <iostream>

using namespace std;

int fact(int n) {
   if ( n==0||n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
int main() {
   int n, k, result;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"n\Enter k : ";
   cin>>k;
   result = fact(n) / (fact(k) * fact(n-k));
   cout << "\nThe result : " << result;
   return 0;

}
