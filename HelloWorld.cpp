#include <iostream>
using namespace std;

int main(){
    cout<<"hello world"<<endl;
    cout<<"hello next line"<<endl;
    short sa=9;
    cout<<"this is short value "<<sa<<endl;


    float const score=32;
    //score=21; error will be their
    cout<<"value of score is "<<score<<endl;
    //User Input
    // int a,b;
    // cout<<"give any a number=";
    // cin>>a;

    // cout<<"give any b number=";
    // cin>>b;
    
    // cout<<"value of a is "<<a<<endl<<"value of b is "<<b<<endl;

    // cout<<"the sum of a and b is "<<(a+b);

    // cout<<"The operation of all will be "<<endl;
    // cout<<"sum="<<a+b<<endl;
    // cout<<"sub="<<a-b<<endl;
    // cout<<"mul="<<a*b<<endl;
    // cout<<"div="<<(float)a/b<<endl;
    // cout<<"mod="<<a%b<<endl;

    //Conditional statement
    // int age;
    // cout<<"enter the age=";
    //cin>>age;
    //age=95;
    // if(age>100 || age){
    //     cout<<"see your age again";
    // }
    // else if(age>=18){
    //     cout<<"you can vote ";
    // }
    // else{
    //     cout<<"you cannot vote";
    // }

    //switch
    // switch (age)
    // {
    // case 18:
    //     /* code */
    //     cout<<"u are 18 yr old";
    //     break;
    // case 20:
    //     /* code */
    //     cout<<"u are 20 yr old";
    //     break;
    
    // default:
    //     cout<<"u are invalid";
        
    // }


    //LOOPS

    //while
    int age=80;
    while(age!=100){
        cout<<" this is while loop="<<age<<endl;
        age++;
    }

    do{
        cout<<" this is do while="<<age<<endl;
        age--;
    }while(age>80);

    for(int i=10;i<40;i=i+10){
        cout<<"this is for loop"<<i<<endl;
    }

    return 0;
}