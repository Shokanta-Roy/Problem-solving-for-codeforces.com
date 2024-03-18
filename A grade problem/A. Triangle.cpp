#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int lengths[4];

    for (int i = 0; i < 4; ++i) {
        cin >> lengths[i];
    }

    // Sort the lengths in ascending order
    sort(lengths, lengths + 4);

    // Check for the conditions to form a triangle
    if (lengths[0] + lengths[1] > lengths[2] || lengths[1] + lengths[2] > lengths[3]) {

        cout << "TRIANGLE" << endl;
    } else if (lengths[0] + lengths[1] == lengths[2] || lengths[1] + lengths[2] == lengths[3]) {
        // Degenerate triangle
        cout << "SEGMENT" << endl;
    } else {
        // Impossible to form a triangle
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
