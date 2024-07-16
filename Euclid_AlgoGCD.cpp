#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int GCD(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){

    cout<<" values is "<<GCD(99,11);
    return 0;
}