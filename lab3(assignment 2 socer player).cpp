
#include <iostream>
#include<string>
using namespace std;
struct palyer {
    string name[5];
    int Player_no[5], Points[5];  
};

void soccer_player() {
    palyer x;
    string show;
    int show_num;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter your name :" << endl;
        cin >> x.name[i];
        cout << "Enter your Number :" << endl;
        cin >> x.Player_no[i];
        cout << "Enter your Points :" << endl;
        cin >> x.Points[i];
        sum = sum+ x.Points[i];
     
    }
    cout << "\t" << " Player_Name" << "\t" << " Player_Number"<<"\t" << " players_Points" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i+1<<"-->    \t" << x.name[i];
        cout << "     \t\t" << x.Player_no[i];
        cout << "\t\t" << x.Points[i] << endl;
       
    }
    for (int i = 0; i < 5; i++) {
       
        if (x.Points[i] > x.Points[i - 1]) {
            show = x.name[i];
            show_num = x.Player_no[i];
        }
    }
    
    cout << endl <<  "Total points earned by the team : " << sum << " points" << endl << endl;
    cout << "the player who has earned the most points  : " << show_num << " " << show <<" "<< sum << " points" << endl;
   
}


int main() {
    soccer_player();
    system("pause");
    return 0;
}
