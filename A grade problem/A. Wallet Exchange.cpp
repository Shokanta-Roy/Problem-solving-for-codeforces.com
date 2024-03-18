#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b;
        // Alice making the first move
        //The current wallet cannot have 0 coins before performing this step.
        if((a+b)%2==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}
