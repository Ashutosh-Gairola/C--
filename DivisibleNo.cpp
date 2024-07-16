#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int Divi(int num,int num1,int num2){
    int c1=num/num1;
    int c2=num/num2;
    int c3=num/(num1*num2);
    return ((c1+c2)-c3);
}
int main(){

    cout<<"the num is "<<Divi(40,5,7);
    return 0;
}