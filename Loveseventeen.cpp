// Program to print all permutations of a
// string in sorted order.
#include <bits/stdc++.h>
using namespace std;

 int SeventeenAgain(string s)
{
    int n = s.length();
    int sum  = n ;
    int  i = 0;
    while(i  <= n)
    { 
        int n1 = s[i] - '0';
        int n2 = s[i+1] - '0';
        if(n1+n2 == 17)
        {
            s.erase(i,2);
            i = 0;
        }
        else
        {
            i++;
        }
    }
     return s.length();

}

// Driver program to test above function
int main()
{
	char str[] = "888999";
	int n  = sortedPermutations(str);
    cout<<n;
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
