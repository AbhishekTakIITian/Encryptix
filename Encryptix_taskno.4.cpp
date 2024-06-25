#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
class todo{
    unordered_map<string,int> list;
    public:
    todo(){
        list.clear();
    }
    void addTask(string s){
        list[s]=0;
    }
    void viewTasks(){
        int cntI=0,cntC=0;
        for(auto it=list.begin();it!=list.end();it++){
            if(it->second == 0) cntI++;
            else cntC++;
        }
        cout<<"Incomplete Tasks : "<<cntI<<endl;
        for(auto it=list.begin();it!=list.end();it++){
            if(it->second == 0) cout<<it->first<<endl;
        }
        cout<<endl;
        cout<<"Completed Tasks : "<<cntC<<endl;
        for(auto it=list.begin();it!=list.end();it++){
            if(it->second == 1) cout<<it->first<<endl;
        }
        cout<<endl;
    }
    void deleteTask(string s){
        if(list.find(s)!=list.end()) list.erase(s);
        else cout<<"Task not found\n";
    }
    void markComplete(string s){
        if(list.find(s)!=list.end()) list[s]=1;
        else cout<<"Task not found\n";
    }
};

int main(){
    int n;
    cout<<"Enter \n 0:Exit. \n 1:Add a task. \n 2:Mark task as complete. \n 3:View tasks. \n 4:Delete task.\n";
    todo ob;
    do{
        cout<<"Enter the input\n";
        cin>>n;
        switch (n)
        {
        case 1:{
            string s;
            cout<<"Enter the task\n";
            cin.ignore();
            getline(cin,s);
            ob.addTask(s);
            break;
        }
        case 2:{
            string s;
            cout<<"Enter the task to mark complete\n";
            cin.ignore();
            getline(cin,s);
            ob.markComplete(s);
            break;
        }
        case 3:{
            ob.viewTasks();
            break;
        }
        case 4:{
            string s;
            cout<<"Enter the task to delete\n";
            cin.ignore();
            getline(cin,s);
            ob.deleteTask(s);
            break;
        }
        case 0:{
            cout<<"Exiting\n";
            break;
        }
        default:{
            cout<<"Invalid input\n";
            break;
        }
        }
    }while(n!=0);
}