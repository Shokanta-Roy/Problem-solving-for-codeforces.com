#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
    int tc,n;
    cin>>tc;
    while (tc--)
    {
        int sum1=0,sum2=0;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; ++i)
            cin>>v[i];

        for (int i = 0; i < n; i+=2)
        {
            sum1 += v[i];
        }
        for (int i = 1; i < n; i+=2)
        {
            sum2 += v[i];
        }
        if ((sum1%2==0 and sum2%2==0)or (sum1%2!=0 and sum2%2!=0))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;

}

