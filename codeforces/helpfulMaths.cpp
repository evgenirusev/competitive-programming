#include <bits/stdc++.h>
using namespace std;

vector<int> parseNumbers(string numbers) {
    vector<int> parsedNumbers;

    for (int i = 0; i < numbers.size(); i += 2) {
        parsedNumbers.push_back(numbers.at(i) - '0');
    }

    return parsedNumbers;
}

int main()
{
    string numbers;
    cin >> numbers;

    vector<int> parsedNumbers = parseNumbers(numbers);
    
    sort(parsedNumbers.begin(), parsedNumbers.end());

    cout << parsedNumbers[0];
    for (int i = 1; i < parsedNumbers.size(); i++) {
        cout << '+' << parsedNumbers[i];
    }

    return 0;
}
