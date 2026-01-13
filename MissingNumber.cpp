#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll xorr1 = 0;
    for (auto it : a) xorr1 ^= it;
    ll xorr2 = 0;
    for (int i = 1; i <= n; i++) xorr2 ^= i;
    cout << (xorr1 ^ xorr2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}