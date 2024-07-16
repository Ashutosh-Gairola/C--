//'Print all prime numbers between 2 given numbers"


#include<iostream>
using namespace std;

int prime(int num1){
    for(int i=2;i<=num1;i++){
        if(num1%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int a,b;
    cin>>a>>b;
    for(int i=a;i<b;i++){
        if(prime(i)==true){
            cout<<"prime number are"<<i;
        }
    }
    return 0;

}