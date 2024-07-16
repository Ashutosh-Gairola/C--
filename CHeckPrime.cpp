#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter the number=";
    cin >> num;
    int temp = 2;

    for(int i=1;i<=num;i++){
        if(num%i==0){
            temp--;
        }
    }
    if(temp==0){
        cout<<"prime";
    }else{
        cout<<"no";
    }
    
    return 0;
}