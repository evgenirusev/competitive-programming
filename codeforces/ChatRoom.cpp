#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    string keyword = "hello";
    int keywordIndex = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word.at(i) == keyword.at(keywordIndex)) {
            keywordIndex++;

            if (keywordIndex > keyword.length() - 1) {
                break;
            }
        }
    }

    if (keywordIndex > keyword.length() - 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
