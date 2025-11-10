#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n ,q;
    cin >> n  >> q;
    vector< long long int> v(n+1);
    for(int i = 1; i <=n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> pre(n+1);
    pre[1] = v[1]; 

    // v[1] = pre[1];

    for(int i = 2 ; i <= n ; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // for(int i = 1; i <=n; i++)
    // {
    //     cout << pre[i] << " ";
    // }

   long long count = 0;
    // Check all subarrays
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++){
            cout << v[l] << " " ;
        }

    }

    return 0;

}