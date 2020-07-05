#include <bits/stdc++.h>
using namespace std;

int getNumberOfMoves(int n);
int computeCellValue(int cell, int targetCell);

int main()
{
    int t;
    cin >> t;

    vector<int> results = {};
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        results.push_back(getNumberOfMoves(n));
    }
    
    for (int result : results) {
        cout << result;
    }
    
    return 0;
}

int getNumberOfMoves(int n) {
    cout << "\033[1;34m" << n << "\033[0m\n" << endl;
    int targetCell = n % 2 
        ? n / 2 
        : n / 2 - 1;

    int numberOfMoves = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            int currentRow = row;
            int currentCol = col;

            while (currentRow != targetCell && currentCol != targetCell) {
                currentRow = computeCellValue(currentRow, targetCell);
                currentCol = computeCellValue(currentCol, targetCell);
                numberOfMoves++;
            }

            while(currentRow != targetCell) {
                currentRow = computeCellValue(currentRow, targetCell);
                targetCell++;
            }

            while(currentCol != targetCell) {
                currentRow = computeCellValue(currentCol, targetCell);
                targetCell++;
            }
        }
    }

    return numberOfMoves;
}

int computeCellValue(int cell, int targetCell) {
    if (cell != targetCell) {
        if (cell < targetCell) {
            return cell + 1;
        }

        return cell - 1;
    }

    return cell;
}
