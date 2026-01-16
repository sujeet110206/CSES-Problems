#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll res = 0;
    ll base = 5;
    while (n / base != 0) {
        res += n / base;
        base *= 5;
    }
    cout << res;
    return 0;
}