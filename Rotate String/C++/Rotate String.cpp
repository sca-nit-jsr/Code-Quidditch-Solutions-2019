/*Author Name: Balasubramanian R
  Github Link: https://github.com/Cyberkid2311 */

/* The main aim of this program is to find the Number of turns made at the end
   and not during the process. So We count the number of Rotations made at the End 
   and print the string accordingly */
   
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    long c = 0;
    while(q--) {
        char t;
        int l;
        cin >> t >> l;
        if (t == 'l') 
        {
            c += l;      //If the string is rotated left side then the count is increased by l
        }
        else 
        {
            c -= l;      //If the string is rotated right side,then the count is decreased by l
        }
    }
    if (c >= 0) 
    {
        c %= s.size();    /*When the count reached the value of the size, 
                            then the string becomes the same as original string
                            so we use the modulus function and fix the value of c */
    }
    else 
    {
        c = -c;          /* If the sum of values of right dominates the sum of values of left,
                            the value of c becomes negative. So we make it positive for easy accessibility */
        
        c = s.size() - (c % s.size());  /* We reduce the value of c from Size*/
        
        c %= s.size();
    }
    
    cout << s.substr(c, s.size() - c);    
    cout << s.substr(0, c) << endl;
}

// ---TEAM SCA---
