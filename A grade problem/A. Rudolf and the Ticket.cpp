#include <iostream>
#include <vector>

using namespace std;

// Function to count the number of ways to select coins
int count_ways(int n, int m, int k, vector<int>& left_coins, vector<int>& right_coins)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (left_coins[i] + right_coins[j] <= k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t; // number of test cases

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k; // number of coins in left and right pockets, and maximum sum

        vector<int> left_coins(n);
        vector<int> right_coins(m);

        for (int i = 0; i < n; ++i)
        {
            cin >> left_coins[i]; // denominations of coins in the left pocket
        }

        for (int i = 0; i < m; ++i)
        {
            cin >> right_coins[i]; // denominations of coins in the right pocket
        }

        int result = count_ways(n, m, k, left_coins, right_coins);
        cout << result << endl;
    }

    return 0;
}


