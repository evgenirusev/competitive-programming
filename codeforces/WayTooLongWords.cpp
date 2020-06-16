#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfWords;
    cin >> numberOfWords;

    for (int i = 0; i < numberOfWords; i++) {
        string word;
        cin >> word;

        if (word.length() > 10) {
            cout << word.at(0) << word.length() - 2 << word.at(word.length() - 1);
        } else {
            cout << word;
        }

        cout << endl;
    }

    return 0;
}
