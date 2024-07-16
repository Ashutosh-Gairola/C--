#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int num;
    cin>>num;
    int rem=0;
    int arm=0;
    while(num>0){
        rem=num%10;
        arm=arm+pow(rem,3);
        num=num/10;
    }
    
    cout<<"the number is ="<<arm;
    return 0;
}