#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long cur = 0;
    long long ans = LLONG_MIN;
    int inc = 1;

    for (int i = 0; i < n; i++) {
        if (i > 0 && a[i] > a[i - 1])
            inc++;
        else
            inc = 1;

        long long val = a[i];
        if (inc >= 4) val *= 2;

        cur = max(val, cur + val);
        ans = max(ans, cur);
    }

    cout << ans;
}
