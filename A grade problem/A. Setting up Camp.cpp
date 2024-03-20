#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        cin >> a >> b >> c;
        if (b % 3 != 0 && b % 3 + c < 3)
        {
            sum = -1;
        }
        else
        {
            sum += a;
            sum += b / 3;
            sum += (c + (b % 3)) / 3;
            if ((c + (b % 3)) % 3 != 0)
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}
