#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int GetBit(int n,int poss){
    return ((n &(1<<poss))!=0);
}

int SetBit(int n,int pos){
    return (n | (1<<pos));
}

int ClearBit(int n,int pos){
    return (n & (~(1<<pos)));
}

int UpdateBit(int n,int pos){
    int v1=ClearBit(n,pos);
    int v2=SetBit(v1,pos);
    return v2;
}
int main(){

    cout<<GetBit(5,2)<<endl;
    cout<<SetBit(5,1)<<endl;
    cout<<ClearBit(5,2)<<endl;
    cout<<UpdateBit(5,3);
    
    return 0;
}