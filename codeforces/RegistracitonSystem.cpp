#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> names = {};

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        if (names.find(name) != names.end()) {
            cout << name << names[name]++ << endl;
        } else {
            cout << "OK" << endl;
            names[name] = 1;
        }
    }

    return 0;
}
