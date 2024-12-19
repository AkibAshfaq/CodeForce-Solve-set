#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        unordered_map<int, vector<int>> value_indices;

        for (int i = 0; i < n; i++) {
            value_indices[h[i]].push_back(i + 1);
        }

        int count = 0;

        for (int i = 0; i < n; i++) {
            int current_value = h[i];
            for (int multiple = current_value; multiple <= 2 * n; multiple += current_value) {
                if (value_indices.count(multiple / current_value)) {
                    for (int idx : value_indices[multiple / current_value]) {
                        if (idx > i + 1 && (current_value * h[idx - 1]) == (i + 1 + idx)) {
                            count++;
                        }
                    }
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
