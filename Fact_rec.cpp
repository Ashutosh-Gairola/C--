#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int fact(int num){
    if(num==0){
        return 1;
    }
    int n=fact(num-1);
    return num*n;
}

int main(){
    cout<<" the fact is "<<fact(5);
}