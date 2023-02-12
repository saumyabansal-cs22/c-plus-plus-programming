#include<iostream>
using namespace std;
int main(){
  cout<<"following operations are to be performed; Please choose;"<<endl;
  cout<<"addition +"<<endl;
  cout<<"subtraction  -"<<endl;
  cout<<"multiplication  *"<<endl;
  cout<<"diviison  /"<<endl;
  cout<<"modulus  %"<<endl;
  int a,b,m;
  char o;
  cin>>a>>o>>b;
  if (o=='+')
   m=1;
  else if (o=='-')
   m=2;
  else if (o=='*')
  m=3;
  else if(o=='/')
  m=4;
  else if (o=='%')
  m=5;
  else
  m=0;

  switch(m){
    case 1:
    cout<<a+b;
    break;
    case 2:
    cout<<a-b;
    break;
    case 3:
    cout<<a*b;
    break;
    case 4:
    cout<<a/b;
    break;
    case 5:
    cout<<a%b;
    break;
    default:
    cout<<"enter the correct operation;";
    break;
      }
}