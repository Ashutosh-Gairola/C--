#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int Power(int n,int p){
    if(p==0){
        return 1;
    }
    int new_n=Power(n,p-1);
    return new_n*n;
}

int main(){
    cout<<" power are "<<Power(4,3);
}