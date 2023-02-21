#include<iostream>
using namespace std;
int fib(int n){
    if (n==0|| n==1){
        return n;
    }
    return (fib(n-2)+fib(n-1));
}

int main(){
    int m;
    cin>>m;
    cout<<"the fibonacci series of "<<m<<"is "<<fib(m)<<endl;
    return 0;
    
    return 0;
}