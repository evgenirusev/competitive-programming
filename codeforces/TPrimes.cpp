#include <bits/stdc++.h>
using namespace std;

string smallest;
string largest;
void computeSmallest(long long m, string current, string target, string* result);
void computeLargest(long long m, string current, string target, string* result);

long long getDigitsSum(string n) {
    long long digitsSum = 0;
    for (int i = 0; i < n.length(); i++) {
        digitsSum += n.at(i) - 48;
    }

    return digitsSum;
}

void handleNumber(long long m, string current, string target, string* result, long long i) {
    string currentNum = current + to_string(i);

    if (to_string(getDigitsSum(currentNum)) == target) {
        *result = currentNum + string(m - 1, '0'); return;
    }

    computeLargest(m - 1, currentNum, target, result);

    if (!result->empty()) {
        return;
    }
}


void computeSmallest(long long m, string current, string target, string* result) {
    if (m <= 0) {
        return;
    }

    for (long long i = 0; i < 10; i++) {
        handleNumber(m, current, target, result, i);
    }
}

void computeLargest(long long m, string current, string target, string* result) {
    if (m <= 0) {
        return;
    }

    for (long long i = 9; i >= 0; i--) {
        handleNumber(m, current, target, result, i);
    }
}

void findSmallest(long long m, string target, string* result) {
    for (long long i = 1; i < 10; i++) {
        computeSmallest(m - 1, to_string(i), target, result);

        if (!smallest.empty()) {
            break;
        }
    }
}

void findLargest(long long m, string target, string* result) {
    for (long long i = 9; i >= 1; i--) {
        computeLargest(m - 1, to_string(i), target, result);

        if (!largest.empty()) {
            break;
        }
    }
}

void printResult(string str) {
    if (str.empty()) {
        cout << -1;
    } else {
        cout << str;
    }
}

int main()
{
    long long m;
    string target;
    cin >> m >> target;

    findSmallest(m, target, &smallest);
    findLargest(m, target, &largest);

    printResult(smallest);
    cout << " ";
    printResult(largest);

    return 0;
}
