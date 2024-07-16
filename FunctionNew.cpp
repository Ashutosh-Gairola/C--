#include<iostream>
using namespace std;

int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}

int main(){
    int a,b;
    cout<<"enter the a and b value=";
    cin>>a;
    cin>>b;
    cout<<"the value of addition will be="<<sum(a,b)<<endl;
}