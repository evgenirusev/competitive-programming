#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, contestantsThatAdvance = 0;
    int a[100];

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] >= a[k - 1]) {
            contestantsThatAdvance++;
        }
    }

    cout << contestantsThatAdvance;
}
