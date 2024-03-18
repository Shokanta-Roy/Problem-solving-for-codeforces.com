//shokanta_roy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        ll a[n], b[n];
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        bool bul = false;
        for(ll i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                cout << 0 << endl;
                bul = 1;
                break;
            }
        }
        if(bul == false)
        {
            ll minnn = INT_MAX;
            ll ind;
            for(ll i = 0; i < n - 1; i++)
            {
                if(a[i + 1] - a[i] < minnn)
                {
                    minnn = a[i + 1] - a[i];
                    ind = i;
                }
            }
            ll ans;
            ans = (a[ind + 1] - a[ind]) / 2 + 1;
            cout << ans << endl;
        }
    }
}
