#include <bits/stdc++.h>
using namespace std;

bool shouldSwitch(string queue, int index) {
    return queue[index] == 'B'
        && (index + 1 < queue.size() 
                && queue[index + 1] == 'G'
           );
}

int main()
{
    int n, x;
    string queue;
    cin >> n >> x >> queue;

    for (int j = 0; j < x; j++) {
        for (int i = 0; i < queue.size(); i++) {
            if (shouldSwitch(queue, i)) {
                swap(queue[i], queue[i + 1]);
                i++;
            }
        }
    }

    cout << queue;

    return 0;
}
