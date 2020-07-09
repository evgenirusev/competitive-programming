#include <bits/stdc++.h>
using namespace std;

bool isDivisibleBy(int a, int b) {
    return a % b == 0;
}

int main() {
    string n;
    cin >> n;
    
    string result = "NO";
    bool hasOnlyLuckyDigits = true;
    for (int i = 0; i < n.length(); i++) {
        char current = n.at(i);

        if (current != '4' && current != '7') {
            hasOnlyLuckyDigits = false;
            break;
        }
    }

    if (hasOnlyLuckyDigits) {
        result = "YES";
    } else {
        int nToInt = stoi(n);
        if (nToInt % 4 == 0 || nToInt % 7 == 0) {
            result = "YES";
        }
    }

    cout << result;
    return 0;
}
