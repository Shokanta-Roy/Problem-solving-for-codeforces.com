#include <iostream>
#include <vector>
#include <string>

using namespace std;

int minCharsToDelete(int n, string s)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i + 2 < n && (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e'))
        {
            count++;
            i += 2; // Skip the 'pie' substring
        }
        else if (i + 2 < n && (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p'))
        {
            count++;
            i += 2; // Skip the 'map' substring
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    vector<int> results;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int minDeletes = minCharsToDelete(n, s);
        results.push_back(minDeletes);
    }

    // Output the results
    for (int i = 0; i < results.size(); ++i)
    {
        cout << results[i] << endl;
    }

    return 0;
}
