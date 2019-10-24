/* Author Name : Monika Sinha
   Github ink  : https://github.com/ms706
*/
#include<bits/stdc++.h>
using namespace std;
void rotate(string &s,int r)
{
    reverse(s.begin(),s.begin()+r);
    reverse(s.begin()+r,s.end());
    reverse(s.begin(),s.end());
}
int main()
{
    long n,k,Q,r;
    char c;
    cin>>n;
    string s;
    cin>>s;
    cin>>Q;
    while(Q--){
        cin>>c>>k;
        if(c=='l')
            r-=k;
        else
            r+=k;
    }
    r=r%n;
    if(r<0)
        rotate(s,abs(r));
    else
        rotate(s,(n-r));
    cout<<s;
    return 0;
}
