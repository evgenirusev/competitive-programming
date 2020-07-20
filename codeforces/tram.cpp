#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int minPassengers = 0;
    int passengers = 0;

    for (int i = 0; i < n; i++) {
        int out, in;
        cin >> out >> in;
        
        passengers -= out;
        passengers += in;

        if (minPassengers < passengers) {
            minPassengers = passengers;
        }
    }

    cout << minPassengers;
    return 0;
}

