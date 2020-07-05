#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, pairs = 0;
    cin >> n;

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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(boys[i] - girls[j]) < 2) {
                pairs++;
                girls[j] = INT_MAX;
                break;
            }
        }
    } 

    cout << pairs;
    return 0;
}

