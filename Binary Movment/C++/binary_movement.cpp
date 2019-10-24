/* Author Name : Monika Sinha
   Github ink  : https://github.com/ms706
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,l,r;
    cin>>n;
    bool arr[n]={0};
    int count[n]={0};
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        count[l-1]-=1;
        if(r<n)
            count[r]+=1;
    }
    for(int i=1;i<n;i++)
        count[i]+=count[i-1];
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(count[i]%2!=0)
            arr[i]=arr[i]==0?1:0;
        if(arr[i]==1)
            c++;
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
