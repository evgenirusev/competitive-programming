#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int groupsOf1 = 0,
        groupsOf2 = 0,
        groupsOf3 = 0,
        groupsOf4 = 0;

    for (int i = 0; i < n; i++) {
        int numberOfPassengers;
        cin >> numberOfPassengers;

        if (numberOfPassengers == 1) {
            groupsOf1++;
        }

        if (numberOfPassengers == 2) {
            groupsOf2++;
        }

        if (numberOfPassengers == 3) {
            groupsOf3++;
        }

        if (numberOfPassengers == 4) {
            groupsOf4++;
        }
    }

    // handle groups of 4
    int taxiCount = groupsOf3 + groupsOf4;

    // handle groups of 3
    groupsOf1 -= groupsOf3;

    // handle groups of 2
    if (groupsOf2 % 2 == 0) {
        taxiCount += groupsOf2 / 2;
    } else if (groupsOf2 == 1) {
        taxiCount += 1;
        groupsOf1 -= 2;
    } else {
        taxiCount += groupsOf2 / 2 + 1;
        groupsOf1 -= 2;
    }

    // handle groups of 1
    if (groupsOf1 > 0) {
        taxiCount += groupsOf1 / 4;

        if (groupsOf1 % 4 != 0) {
            taxiCount += 1;
        }
    }

    cout << taxiCount;

    return 0;
}
