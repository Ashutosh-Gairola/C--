#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,0,7,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    
    for(int i=0;i<size;i++){
        int curr=0;
        for(int j=i;j<size;j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }

    

}