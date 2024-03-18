//shokanta_roy
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    // Loop over each test case
    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> responses; // Stores (words, quality) for each response
        int winnerIdx = 0; // Initialize the index of the winner to 0

        for (int i = 0; i < n; i++) {
            int words, quality;
            cin >> words >> quality;
            responses.push_back(make_pair(words, quality));

            // Check if the response has words not exceeding 10 and has higher quality than the current winner
            if (words <= 10 && quality > responses[winnerIdx].second) {
                winnerIdx = i;
            }
        }

        // Output the index of the winner (adding 1 because the indices are 0-based)
        cout << winnerIdx + 1 << endl;
    }

    return 0;
}
