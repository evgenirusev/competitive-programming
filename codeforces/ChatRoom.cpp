#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string kw = "hello";
    int kwPointer = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == kw[kwPointer]) {
            kwPointer++;
        }

        if (kwPointer >= kw.length()) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
