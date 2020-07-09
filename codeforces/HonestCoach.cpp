#include <bits/stdc++.h>
#include <climits>
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

        int best = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    int diff = abs(players[i] - players[j]);
                    if (diff < best) {
                        best = diff;
                    }
                }
            }
        }

        cout << best << endl;
    }


    return 0;
}
