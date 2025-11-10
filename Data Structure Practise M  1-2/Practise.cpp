#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    long long K;
    cin >> n >> K;

    vector<long long> v(n + 1), pre(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> v[i];

    // Build prefix sums
    for (int i = 1; i <= n; i++) pre[i] = pre[i - 1] + v[i];

    long long cnt = 0;

    // Loop through all subarrays
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
            long long sum = pre[r] - pre[l - 1];
            if (sum <= K) {
                cnt++;

                // Print the subarray elements
                cout << "[";
                for (int k = l; k <= r; k++) {
                    cout << v[k];
                    if (k != r) cout << ",";
                }
                cout << "]  ";
            }
        }
    }

    cout << "\nTotal valid subarrays: " << cnt << "\n";
    return 0;
}
