#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x[4], y[4];

        // Input coordinates of the square
        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }

        // Sort the coordinates to find the side lengths of the square
        sort(x, x + 4);
        sort(y, y + 4);

        // Calculate and output the area of the square
        int sideLength = max(x[2] - x[1], y[2] - y[1]);
        cout << sideLength * sideLength << endl;
    }

    return 0;
}
