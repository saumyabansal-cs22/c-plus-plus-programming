#include<iostream>
using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     switch(a){
//         case 1:
//         cout<<"31";
//         break;
//         case 2:
//         cout<<"28";
//         break;
//         case 3:
//         cout<<"31";
//         break;
//         case 4:
//         cout<<"30";
//         break;
//         case 5:
//         cout<<"31";
//         break;
//         case 6:
//         cout<<"30";
//         break;
//         case 7:
//         cout<<"31";
//         break;
//         case 8:
//         cout<<"31";
//         break;
//         case 9:
//         cout<<"30";
//         break;
//         case 10:
//         cout<<"31";
//         break;
//         case 11:
//         cout<<"30";
//         break;
//         case 12:
//         cout<<"31";
//         break;
//         default:
//         cout<<"please enter the correct month number";
//         break;

//     }
//    return 0;


//*********negative positive or zero**********

// int main(){
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     if (n>0)
//       n=1;
//     else if (n<0)
//       n=2;
//     else
//       n=3;
//     switch(n){
//         case 1:
//         cout<<"positive";
//         break;
//         case 2:
//         cout<<"negative";
//         break;
//         case 3:
//         cout<<"zero";
//         break;
    
//     }
// }


//***********simple calculator using switch case************
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