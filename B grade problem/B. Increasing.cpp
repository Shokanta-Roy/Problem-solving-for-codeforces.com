
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t, c = 0; cin >> t;
    while(t--){
        int n; cin >> n;
        ll arr[n];
        bool flag = true;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for(int i = 0; i < n; i++){
            if(arr[i] == arr[i + 1]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}
