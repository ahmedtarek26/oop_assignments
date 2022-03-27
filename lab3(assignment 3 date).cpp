
#include <iostream>
#include<string>
using namespace std;
struct Date {
    int day=18 ,  month=11,  year=2020;
};

void Date_next(){
    Date current;
    for (int i = 1; i < 45; i++) {
        if(current.day==31){
        current.day=1;
        current.day+=1;
        current.month+=1;
    }
    else
        current.day+=1;
    }
    cout << current.day << endl;
    cout << current.month <<endl;
    cout << current.year << endl;

}

int main() {
    Date_next();
    system("pause");
    return 0;
}
