#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfWords;
    cin >> numberOfWords;

    vector<string> words;
    for (int i = 0; i < numberOfWords; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }

    for (string s : words) {
        if (s.length() > 10) {
            cout << string(1, s.at(0)) 
                << (s.length() - 2) 
                << string(1, s.at(s.length() - 1));
        } else {
            cout << s;
        }

        cout << endl;
    }

    return 0;
}
