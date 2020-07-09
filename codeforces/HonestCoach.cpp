#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> players = {};
        for (int i = 0; i < n; i++) {
            int player;
            cin >> player;
            players.push_back(player);
        }

        sort(players.begin(), players.end());

        int diff = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            int currDiff = abs(players[i] - players[i + 1]);
            if (currDiff < diff) {
                diff = currDiff;
            }
        }

        cout << diff << endl;
    }

    return 0;
}
