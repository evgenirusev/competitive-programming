#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;

    set<char> vowels = {
        'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U',  'y', 'Y'
    };

    for (int i = 0; i < word.length(); i++) {
        char current = word.at(i);
        bool isVowel = vowels.find(current) != vowels.end();

        if (!isVowel) {
            if (isupper(current)) {
                current = tolower(current);
            }

            cout << '.' << current;
        }
    }

    return 0;
}
