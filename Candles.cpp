/*

There's a blackout and you need to light candles at home. You are given N candles and an integer K. You can use the burnt wax of K
candles to make a new (unburnt) candle. Your task is to figure out the maximum number of candles that must be burned to illuminate your entire house.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int solve(int n,int k)
{
    return n+(n-1)/(k-1);
}
int main()
{
 cout<<solve(7,4);
    return 0;
}
