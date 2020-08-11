#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> array1,vector<int> array2) {
    unordered_map<int, int> numbersCount = {};

    for (int n : array1) {
        if (numbersCount.count(n) < 1) {
            numbersCount[n] = 1;
        } else {
            numbersCount[n]++;
        }
    }

    for (int n : array2) {
        if (numbersCount.count(n) < 1) {
            return false;
        } else {
            numbersCount[n]--;

            if (numbersCount[n] < 1) {
                numbersCount.erase(n);
            }
        }
    }

    return true;
}

int main()
{
    vector<int> array1 = {3, 1, 4, 7};
    vector<int> array2 = {7, 1, 3, 4};

    vector<int> array3 = {3, 1, 4, 7, 1};
    vector<int> array4 = {7, 1, 3, 4, 9};

    cout << solve(array1, array2) << endl;
    cout << solve(array3, array4);
    return 0;
}
