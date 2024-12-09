#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string tasks;
        cin >> tasks;

        vector<bool> visited(26, false);
        bool suspicious = false;

        for (int i = 0; i < n; ++i) {
            char currentTask = tasks[i];

            if (i > 0 && tasks[i] != tasks[i - 1] && visited[currentTask - 'A']) {
                suspicious = true;
                break;
            }
            visited[currentTask - 'A'] = true;
        }

        if (suspicious)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
