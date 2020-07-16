#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string row;
    cin >> row;

    int removedStonesCount = 0;
    char prev = row.at(0);
    for (int i = 1; i < n; i++) {
        if (prev == row.at(i)) {
            removedStonesCount++;
        } else {
            prev = row.at(i);
        }
    }

    cout << removedStonesCount;
    return 0;
}
