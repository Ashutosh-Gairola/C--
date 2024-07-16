
#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<"next problem"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    cout<<endl<<"next problem"<<endl;
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<"next problem"<<endl;

    for(int i=0;i<=5;i++){
        for(int j=0;j<=4;j++){
            if(i==0||j==0||i==5||j==4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }


    cout<<endl<<"next problem"<<endl;

    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            if(j<=5-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }




}