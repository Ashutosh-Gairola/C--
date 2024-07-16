#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void prime(int num)
{
    int prime[100]={0};

    for (int i = 2; i <= num; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= num; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= num; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{

    prime(50);
    return 0;
}