#include<iostream>
#include<array>
using namespace std;

int main(){
    // int arr[3]={4,5,6};
    // int size=(sizeof(arr)/sizeof(arr[0]));
    // for (int i = 0; i < size; i++){
    //     cout<<arr[i]<<endl;
    // }


    int arr2[2][3]={
        {1,2,3},
        {4,5,6}
    };

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    

    //typecasting
    int a=95;
    cout<<(double)a;

    return 0;
    
}