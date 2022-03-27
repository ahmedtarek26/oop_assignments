
#include <iostream>
#include<string>
using namespace std;
struct customers {
    string name;
    int account_no, balance;
};

void printl() {
    customers x[3];   
    for (int i = 0; i < 3; i++) {
        cout << "Enter your name :" << endl;
        cin >> x[i].name;
        cout << "Enter your account number :" << endl;
        cin >> x[i].account_no;
        cout << "Enter your balance :" << endl;
        cin >> x[i].balance;

        if (x[i].balance < 200) {
            cout << "*******************" << endl;
            cout << x[i].name << " balance less than 200$ :" <<  endl;
            cout << "*******************" << endl;
        }
    }
    
}
void increase() {
    customers x[3];
    cout << "  the incremented value of their balance" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Enter your name :" << endl;
        cin >> x[i].name;
        cout << "Enter your account number :" << endl;
        cin >> x[i].account_no;
        cout << "Enter your balance :" << endl;
        cin >> x[i].balance;
        if (x[i].balance > 1000) {
            cout << "*******************" << endl;
            cout << "the increase value of balance: " << x[i].balance + 100 << endl;
            cout << "*******************" << endl;
        }  
    }
    }

int main() {

    printl();
    increase();
    system("pause");
    return 0;
}
