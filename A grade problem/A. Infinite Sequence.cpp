#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b)||(c!=0 && (b-a)/c>0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}
