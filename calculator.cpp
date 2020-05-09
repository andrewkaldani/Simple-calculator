#include <iostream>
#include <stack>
#include<algorithm>
#include <string>
#include<vector>
#include<queue>
#include <cstdlib>
#include<cmath>
using namespace std;
int main(){
double answer, a, b,pervious;
char o;
char y;
//char ans;
cout<<"Simple Calculator: "<<endl;
cout<<"Operations supported:+ - * /"<<endl;
cout<<"IF you would like to continue calculations to the answer"<<endl;
cout<<"just enter the next operation you would like ex +4"<<endl;
cout<<"if you would like to clear calculations type c or C "<<endl;
cout<<"END PROGRAM TYPE R OR r"<<endl;
cout<<"Begin calcualtions enter number: "<<endl;
cin>>a;
cin>>o;
answer=a;

do {

  pervious = answer;
  //cin>>o;
  cin>>b;
  if(o=='+')
  {
    answer+=b;
    cout<<answer<<endl;
  }
  if(o=='-')
  {
  answer-=b;
  cout<<answer<<endl;
  }
  if(o=='*')
  {
  answer*=b;
  cout<<answer<<endl;
  }
  if(o=='/')
  {
  answer/=b;
  cout<<answer<<endl;
  }

  cout<<"continue"<<endl;
  cin>>o;
  if(o=='c'||o=='C'){
    cin>>answer;
    cin>>o;
    cin>>b;
    if(o=='+'){
    answer+=b;
    cout<<answer<<endl;}
    if(o=='-'){
    answer-=b;
    cout<<answer<<endl;}
    if(o=='*'){
    answer*=b;
    cout<<answer<<endl;}
    if(o=='/'){
    answer/=b;
    cout<<answer<<endl;}
    cin>>o;
  }
  else if(o=='r'){break;}

} while(o!='r'|| o!='R');


return 0;
}
