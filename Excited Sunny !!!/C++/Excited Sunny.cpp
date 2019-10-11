/*Author Name: Balasubramanian R
  Github Link: https://github.com/Cyberkid2311 */
  
  /* For Solving this problem easily one needs to have the basic knowledge of ceil and Floor Function
     1.floor(x) : Returns the largest integer that is smaller than or equal to x (i.e : rounds down to the nearest integer).
     2.ceil(x) : Returns the smallest integer that is greater than or equal to x (i.e : rounds up the nearest integer). */
  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll t; 
    cin>>t;
    while(t--)
{
        double l1,l2; 
	      cin>>l1>>l2;
        ll ans = (ceil(sqrt(l1)) - floor(sqrt(l2)))+1;
        if(ans&1)     //Uses Bitwise AND Operator to check whether a number is odd or not.
        {
          cout << "Odd\n";
        }
        else
        {
          cout << "Even\n";
        }
          
    }
    return 0;
}

// ---TEAM SCA---
