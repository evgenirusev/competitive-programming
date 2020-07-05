#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, maxPairs = 0;
    cin >> n;

    // will initially implement with array, then consider using hash map
    vector<int> boys = {};
    for (int i = 0; i < n; i++) {
        int boySkill;
        cin >> boySkill;
        boys.push_back(boySkill);
    }

    cin >> m;
    vector<int> girls = {};
    for (int i = 0; i < m; i++) {
        int girlSkill;
        cin >> girlSkill;
        girls.push_back(girlSkill);
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    for (int i = 0; i < m; i++) {
        int girlSkill = girls[i];

        int bestMatch = -1;
        for (int j = 0; j < boys.size(); j++) {
            int diff = abs(boys[j] - girlSkill);

            if (diff == 1) {
                bestMatch = j;
                break;
            }

            if (diff == 0) {
                bestMatch = j;
            }
        }

        if (bestMatch != -1) {
            maxPairs++;
            boys.erase(boys.begin() + bestMatch);
        }
    }

    cout << maxPairs;
    return 0;
}
