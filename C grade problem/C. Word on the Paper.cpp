//shokanta_roy
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    // Loop over each test case
    while (t--) {
        char grid[8][8];

        // Read the input grid
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> grid[i][j];
            }
        }

        string word;

        // Traverse each column to find the word
        for (int j = 0; j < 8; j++) {
            for (int i = 0; i < 8; i++) {
                // Check if the character is a lowercase Latin letter
                if (grid[i][j] >= 'a' && grid[i][j] <= 'z') {
                    word += grid[i][j];
                }
            }
        }

        // Output the word for this test case
        cout << word << endl;
    }

    return 0;
}
