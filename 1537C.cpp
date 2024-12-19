#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INT_MAX 2147483647;

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

        sort(h.begin(), h.end());

        if(n == 2)
        {
            cout << h[0] << " "<< h[1] <<endl;
            continue;
        }

        int min = INT_MAX;
        int idx = -1; 

        for (int i = 1; i < n; i++) {
            int diff = h[i] - h[i - 1];
            if (diff < min) {
              min = diff;
              idx = i;               
            }
        }

        for (int i = idx; i < n; i++) {
            cout << h[i] << " ";
        }

        for (int i = 0; i < idx; i++) {
            cout << h[i] << " ";
        }
        cout << endl;

    }
    return 0;
}