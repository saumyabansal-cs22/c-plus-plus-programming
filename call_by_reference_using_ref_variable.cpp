#include<iostream>
using namespace std;
void swapnumber(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}

int main(){
    int x=9,y=8;
    swapnumber(x,y);
    cout<<"value of x="<<x<<"value of y="<<y<<endl;
    
    return 0;
}