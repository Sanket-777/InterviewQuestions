#include<bits/stdc++.h>
using namespace std;
//Given a number of coins build staircase where each row as less one coin then the below

void arrangeCoins(vector<long> coins)
{
    long i = 0;
    long sum = 0;
    for(int j = 0;j < coins.size();j++)
    {   i = 0;
        sum = 0;
        int n = coins[j];
         while(sum <= n)
         {
             sum+=++i;
         }
             cout<<i-1<<endl;
    } 
}

int main()
{
 vector<long> coins = {2,5,8,3};
 arrangeCoins(coins);
return 0;
}
