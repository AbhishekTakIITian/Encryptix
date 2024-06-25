#include<iostream>
using namespace std;
int main(){
    long long x,y;
    cin>>x;
    char op,equal='+';
    do{
        cout<<"Enter operator\n";
        cin>>op;
        cin>>y;
        switch (op)
        {
        case '+':{
            x=x+y;
            cout<<'='<<x<<endl;
            break;
        }
        case '-':{
            x=x-y;
            cout<<'='<<x<<endl;
            break;
        }
        case '*':{
            x=x*y;
            cout<<'='<<x<<endl;
            break;
        }
        case '/':
            {
                if(y!=0){
                    x=x/y;
                    cout<<'='<<x<<endl;
                }
                else cout<<"Invalid denominator cannot be zero\n";
            }
            break;
        default:
            cout<<"Invalid operator\n";
            break;
        }
        cout<<"Want to stop enter '=' \n";
        cin>>equal;
    }while(equal != '=' );
    cout<<"Result is ="<<x<<endl;
}