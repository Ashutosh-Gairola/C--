#include<iostream>
#include<string>
using namespace std;

int main(){

    string name="Ashutosh";
    cout<<"the name is "<<name<<endl;
    cout<<"the length of name is "<<name.length()<<endl;
    cout<<"the sub string is "<<name.substr(0,4)<<endl;
    cout<<"the name is "<<name.substr(4,8)<<endl;


    return 0;
}