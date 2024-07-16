#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int reverse=0,rem;

    while(num>0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }

    cout<<"reverse of it is="<<reverse;
    return 0;

}