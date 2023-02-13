#include<iostream>
using namespace std;

int main(){
     int i,n;
    cout<<"enter the number ; ";
    cin>>n;
    int f=1;
    while(n>0)
{    for (i=1;i<=n;i++){
        f=f*i;
    }
    cout<<"factorial of the number is = "<<f;
}
    return 0;
}