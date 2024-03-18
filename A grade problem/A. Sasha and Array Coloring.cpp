#include<bits/stdc++.h>
using namespace std;
main()
{
int t; cin>>t;
while(t--)
{
    int n,i,c=0,a[200000]; cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n/2;i++)c+=a[n-i-1]-a[i];
    cout<<c<<endl;
}
}
