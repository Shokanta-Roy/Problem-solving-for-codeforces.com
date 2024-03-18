#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(str=="abc"|| str=="cba"|| str=="acb"|| str=="bac")
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
