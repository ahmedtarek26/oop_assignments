
#include <iostream>

using namespace std;

class bank_account{
private:
    string name;
    int account_num;
    int balance;
    char type;
public:
    /*bank_account(string x,int y,int z, char a){
        name=x;
        account_num=y;
        balance=z;
        type=a;
    }*/
    bank_account(){};
    void set_name(string x){
        name=x;
    }
    string get_name(){
        return name;
    }
    void set_account_num(int x){
        account_num=x;
    }
    int get_account_num(){
        return account_num;
    }
    void set_balance(int x){
        balance=x;
    }
    int get_balance(){
        return balance;
    }
    void set_type(char x){
        type=x;
    }
    char get_type(){
        return type;
    }
    
    void deposite(int x){
        balance+=x;
    
    }
    void withdrow(int x){
        if (balance>=1000){
            balance-=x;
        };
        
    }
    void display(){
        cout<<"name           :"<<get_name()<<endl;
        cout<<"account number :"<<get_account_num()<<endl;
        cout<<"balance        :"<<get_balance()<<endl;
        cout<<"type           :"<<get_type()<<endl;
    }
    
};

int main()
{
    string cl_name;
    int cl_account_num;
    int cl_balance;
    char cl_type;
    int size;
    cout<<"enter number of customers"<<endl;
    cin>>size;
    
    bank_account *arr= new bank_account[size];
    for(int i=0;i<size;i++){
         cout<<"name           :"<<endl;
         cin>>cl_name;
        cout<<"account number :"<<endl;
        cin>>cl_account_num;
        cout<<"balance        :"<<endl;
        cin>>cl_balance;
        cout<<"type           :"<<endl;
        cin>>cl_type;
        //arr[i](cl_name,cl_account_num,cl_balance,cl_type);
        arr[i].set_name(cl_name);
        arr[i].set_account_num(cl_account_num);
        arr[i].set_balance(cl_balance);
        arr[i].set_type(cl_type);
        arr[i].deposite(100);
        arr[i].withdrow(100);
        cout<<arr[i].get_balance()<<endl;
        cout<<"client number "<<size<<endl;
        arr[i].display();
        

    };
    

    return 0;
}
