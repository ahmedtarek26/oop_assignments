
#include <iostream>
#include<string>
using namespace std;

class st
{
    public:
    int id;
    int degree[3];
    int tottal_deg;
    string name;
    
   
    void data(){
        cout<<"id "<<"\n";
        cin>>id;
        cout<<"name "<<"\n";
        cin>>name;
        for(int i=0;i<=2;i++){
            cout<<"degree "<<"\n";
            cin>>degree[i];
        
        }
    }
    void compute_degrees(){
    
            tottal_deg=degree[0]+degree[1]+degree[2];
            cout<<"tottal_deg "<<tottal_deg<<"\n";
    
        
    }
    
};
int main()
{
    int s;
    cout<<"size"<<"\n";
    cin>>s;
   st st[s];
   for(int i=0;i<s;i++){
   st[i].data();
   st[i].compute_degrees();
   }
    return 0;
}
