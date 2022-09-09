// Program to print all permutations of a
// string in sorted order.
#include <bits/stdc++.h>
using namespace std;

 int CollectingBeads(string s)
{
    int n = s.length();
    set<string> sett;
    for(int i = 0 ;i <=n;i++)
    { 
      char ch  = s[0];
      s.erase(s.begin());
      s.append(string(1,ch));
      sett.insert(s);
      v.push_back(s);
      reverse(s.begin(),s.end());
      sett.insert(s);
      reverse(s.begin(),s.end());

    }
     return sett.size();

}

// Driver program to test above function
int main()
{
	char str[] = "aabbbbaaaabbbbaaa";
	int n  = sortedPermutations(str);
    cout<<n;
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
