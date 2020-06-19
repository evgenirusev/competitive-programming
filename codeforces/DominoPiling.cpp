#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int m, n;
    cin >> m >> n;
 
    vector<vector<bool>> rectangle(m, vector<bool>(m, false));
    int placedDominos = 0;
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!rectangle[i][j] && (j + 1 < n && !rectangle[i][j + 1])) {
                rectangle[i][j] = true;
                rectangle[i][++j] = true;
 
                placedDominos++;
            }
        }
    }
 
    if (n % 2 != 0) {
        placedDominos += m / 2;
    }
 
    cout << placedDominos;
 
    return 0;
}
