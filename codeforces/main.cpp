#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int groupsOf1, groupsOf2, groupsOf3, groupsOf4;

    for (int i = 0; i < n; i++ ) {
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

    int taxiCount = groupsOf3 + groupsOf4;

    groupsOf1 -= groupsOf3;




    return 0;
}
