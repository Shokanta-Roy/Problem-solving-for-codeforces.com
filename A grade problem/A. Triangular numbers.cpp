/*
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        if(sum==n){
            cout<<"YES"<<endl;
            break;
        }
    }
    if(n==i){
        cout<<"NO"<<endl;
    }
    getch();
  return 0;
}
*/


#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;

    int n = 1;
    int triangularNumber = 1;

    while (triangularNumber < num) {
        n++;
        triangularNumber = n * (n + 1) / 2;
    }

    if (triangularNumber == num) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;

}
