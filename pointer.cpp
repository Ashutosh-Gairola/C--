#include<iostream>
using namespace std;

int main(){

    int a=78;
    int *ptra;
    ptra=&a;

    cout<<"value of a is="<<a<<endl;
    cout<<"value of a is="<<*ptra<<endl;
    cout<<"address of a is ="<<ptra<<endl;
    cout<<"address of a is ="<<&a<<endl;
    return 0;
}