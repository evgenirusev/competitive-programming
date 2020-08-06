#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            char color;
            cin >> color;

            if (color == 'C' || color == 'M' || color == 'Y') {
                cout << "#Color";
                return 0;
            }
        }
    }

    cout << "#Black&White";
}
