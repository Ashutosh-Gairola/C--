#include <iostream>
#include<vector>
#include <utility> 
using namespace std;

int main(){
    // vector<pair<char, int>> t;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++){
    //     cout<<*it<<endl;
    // }

    // for(auto element:v){
    //     cout<<element<<endl;
    // }

    pair <int,char> p;
    p.first=12;
    p.second='q';

    cout<<p.first<<" "<<p.second;

    vector<pair<char,int>>t;

    for(int i=0;i<3;i++){
        pair<char,int> p;
        cout<<"enter the first =";
        cin>>p.first;
        cout<<"enter the second =";
        cin>>p.second;
        t.push_back(p);
    }

    return 0;
}