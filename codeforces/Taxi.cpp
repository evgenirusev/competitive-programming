#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> groupCount = { 0 };

    for (int i = 0; i < n; i++) {
        int numberOfPassengers;
        cin >> numberOfPassengers;

        groupCount[numberOfPassengers]++;
    }

    int taxiCount = groupCount[3] + groupCount[4];

    groupCount[1] -= groupCount[3];

    if (groupCount[2] % 2 == 0) {
        taxiCount += groupCount[2] / 2;
    } else if (groupCount[2] == 1) {
        taxiCount += 1;
        groupCount[1] -= 2;
    } else {
        taxiCount += groupCount[2] / 2 + 1;
        groupCount[1] -= 2;
    }

    if (groupCount[1] > 0) {
        taxiCount += groupCount[1] / 4;

        if (groupCount[1] % 4 != 0) {
            taxiCount += 1;
        }
    }

    cout << taxiCount;

    return 0;
}
