#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    // Calculate the number of flagstones needed for each dimension
    long long x = (n + a - 1) / a;  // Equivalent to ceil(n/a)
    long long y = (m + a - 1) / a;  // Equivalent to ceil(m/a)

    // Calculate the total number of flagstones needed
    long long result = x * y;

    cout << result << endl;

    return 0;
}
