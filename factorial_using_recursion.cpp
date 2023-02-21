#include<iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;
    }
    int prevfac=factorial(n-1);
    return n*prevfac;
}

int main(){
    int n;
    cout<<"enter number;=";
    cin>>n;
    cout<<"factorial of "<<n<<" is = "<<factorial(n);
    
    return 0;
}