#include <bits/stdc++.h>
#define ll long long
#define in(a, b) for (ll i = (a); i <= (b); i++)                 // in using i
#define sz(v) v.size()

using namespace std;

int main()
{
    string s;
    cin>>s;
    string cmps="hello";//compare string
    ll  j=0,cmp=0;
    in(0,sz(s)-1)
    {
        if(s[i]==cmps[j])
        {
            j++;
            cmp++;
        }
    }


    if(cmp==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int i, terminate=1;
//    char s[100];
//    scanf("%s",s);
//
//    char s1[]="ahhellllloou";
//
//
//    if(strlen(s)==strlen(s1))
//    {
//        for(i=0;i<strlen(s1);i++)
//        {
//            if(s[i]!=s1[i])
//            {
//                terminate=0;
//                break;
//            }
//            else
//            {
//                i++;
//            }
//        }
//
//    }
//    else
//    {
//        //terminate=0;
//        printf("NO");
//        return 0;
//    }
//       if(terminate==0)
//       printf("NO");
//    else
//        printf("YES");
//
//    return 0;
//}
