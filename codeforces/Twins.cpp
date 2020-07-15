#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins;
    for (int i = 0; i < n; i++) {
        int coin;
        cin >> coin;

        coins.push_back(coin);
    }

    sort(coins.begin(), coins.end(), greater<>());
    int sum = accumulate(coins.begin(), coins.end(), 0);

    int coinsCount = 0;
    int currentSum = 0;
    for (int coin : coins) {
        currentSum += coin;
        coinsCount++;

        if (currentSum > sum / 2) {
            break;
        }
    }

    cout << coinsCount;
    return 0;
}
