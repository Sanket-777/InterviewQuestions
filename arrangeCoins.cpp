#include<bits/stdc++.h>
using namespace std;
//Given a number of coins build staircase where each row as less one coin then the below

void arrangeCoins(vector<long> coins)
{
    long i = 0;
    int n = coins.size();
    long sum = 0;
    while(sum <= n)
    sum+=++i;
    
    cout<<i-1<<endl;
}

int main()
{
 vector<long> coins = {1,2,3,4,5,6,7,8};
 arrangeCoins(coins);
return 0;
}