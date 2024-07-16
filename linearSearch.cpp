#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int size= sizeof(arr)/sizeof(arr[0]);
    int searach;
    cin>>searach;

    for(int i=0;i<size;i++){
        if(arr[i]==searach){
            cout<<"at the index "<<i<<" it have "<<arr[i];
        }
    }
    return 0;
}