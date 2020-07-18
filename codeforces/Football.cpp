#include <bits/stdc++.h>
using namespace std;

int main()
{
    string players;
    cin >> players;

    string result = "NO";
    int count = 1;
    char previousPlayer = players.at(0);
    for (int i = 1; i < players.length(); i++) {
        char currentPlayer = players.at(i);

        if (currentPlayer == previousPlayer) {
            count++;

            if (count >= 7) {
                result = "YES";
                break;
            }
        } else {
            count = 1;
            previousPlayer = currentPlayer;
        }
    }

    cout << result;

    return 0;
}
