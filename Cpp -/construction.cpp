#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(5, 10);           // 5 elements, all 10
    cout << "size=" << v.size() 
         << " capacity=" << v.capacity() << "\n";

    // forward
    for (size_t i = 0; i < v.size(); ++i) cout << v[i] << " ";
    cout << "\n";

    // reverse (safe)
    for (auto it = v.rbegin(); it != v.rend(); ++it) cout << *it << " ";
    cout << "\n";

    return 0;
}



