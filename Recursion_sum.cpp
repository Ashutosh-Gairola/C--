#include<iostream>
#include<algorithm>
#include<string>
using namespace std;



int Rec_sum(int num){
    if (num == 0) {
        return 0; // Base case: sum of numbers up to 0 is 0
    }
    int prev_sum=Rec_sum(num-1);
    return num+(prev_sum);

}
int main(){

    cout<<"sum is="<<Rec_sum(10);
    return 0;
}