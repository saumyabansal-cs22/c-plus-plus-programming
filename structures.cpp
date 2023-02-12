#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;

}ep;


int main(){
    ep saumya;
    struct employee shubham;
    struct employee kartikey;
    saumya.favchar='c';
    saumya. eId=23;
    saumya.salary=12000000000000;
    cout<<saumya.salary<<endl;
    cout<<saumya.eId<<endl;
    cout<<saumya.favchar<<endl;
    return 0;
}