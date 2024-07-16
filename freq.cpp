#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string st="jhakdshawiwqyiyoqwoibmbxbajabdiahs";

    int freq[26];

    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int j=0;j<st.size();j++){
        freq[st[j]-'a']++;
    }

    int temp_max=freq[0];
    char ans='a';
    for(int i=0;i<26;i++){
        if(freq[i]>temp_max){
            temp_max=freq[i];
            ans=i+'a';
        }
    }

    cout<<"the max is "<<temp_max<<ans;

    return 0;
}