/* Author Name : Monika Sinha
   Github ink  : https://github.com/ms706
*/
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
int main()
{
    long long n,sum=0,l=2;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=(i%M*l)%M;
        l=l%M*2;
        sum=sum%M;
    }
    cout<<sum;
}
