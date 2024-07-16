#include<iostream>
using namespace std;

int main(){

    int arr[]={21,321,43,65,21,67,112,43,56,643,121};
    int size=sizeof(arr)/sizeof(arr[0]);

    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }


    cout<<"largest element="<<max;
    return 0;
}