/* Author Name : Monika Sinha
   Github ink  : https://github.com/ms706
*/
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n,q,p1,p2;
    cin>>n;
    long long arr[n],h[100001]={0},s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;arr[i]<100001;i++)
    {
        s=s+arr[i];
        h[arr[i]]=s;
       
    }
    for(int i=arr[0];i<100001;i++)
    {
      if(h[i]==0)
        h[i]=h[i-1];
    }
    cin>>q;
    while(q--)
    {
        cin>>p1>>p2;
        
        if(p1!=0)
            cout<<h[p2]-h[p1-1]<<endl;
        else
            cout<<h[p2]<<endl;
    }
}
