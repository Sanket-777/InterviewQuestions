/*
Collecting coins

Tack

John is playing a battle royale game in which the game consists of N heroes and M monsters. 
The powers of the heroes and the monsters are represented by arrays A and B respectively. A hero can defeat a monster if his 
power is greater than or equal to the power of the monster. A hero gains some number of coins corresponding to the monster he defeated. 
The coins after defeating a particular monster are represented by an array C of size M. Now John is curious to know how many coins each hero can 
collect by defeating any monsters in the game.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

vector<long long>   solve(int n,int m,vector<int> &A,vector<int> &B,vector<int> &C)
{
    int cost = 0;
    vector< pair <long,long> > v;
    vector<long long> p(n);
    long long sum = 0;
    long long prev = 0;
    for(int i = 0;i < m;i++)
    {
        v.emplace_back(B[i], C[i]);
    }

    sort(v.begin(),v.end());
    for(int i = 0;i < m;i++)
    {
        v[i].second += sum;
        sum = v[i].second;
    }
    int end = m-1;
    int k = 0;
    for(int i = 0;i < n;i++)
    {
        k = 0;
      while(v[k].first < A[i])
      {
        k++;
      }
        if(A[i] < v[k].first)
        {
            k -= 1;
        }
      p[i] = v[k].second;
    }

   return p;
}
int main()
{

vector<int> a  {1,3,5,2,4};
vector<int> b  {1,4,2,9};
vector<int> c {1,2,8,4};
vector<long long > v = solve(5,4,a,b,c);
for(long long k:v)
{
    cout<<k<<" ";
}

    return 0;
}
