#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
  srand(time(NULL));
  int x,guess,check=1;
  x = rand()%100+1;
  do{
    cout<<"Enter your guess\n";
    cin>>guess;
    if(guess>10+x){
      cout<<"Your guess way more higher\n";
    }
    else if(guess>x){
      cout<<"Your guess is just higher\n";
    }
    else if(guess<x-10){
      cout<<"Your guess is very lower\n";
    }
    else if(guess<x){
      cout<<"Your guess is just low\n";
    }
    if(guess==x) break;
    cout<<"Want to continue\n Press 0 : Quit\n";
    cin>>check;
    if(check==0)break;
  } while(x!=guess);  
  if(check == 0){
    cout<<"Sorry, you lost!!\n The Number was: "<<x;
    cout<<endl;
  }
  else{
      cout<<"Congratulations 🎊, correct answer\n";
  }
}