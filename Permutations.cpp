#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    vector<int> a(n);
    int half = n / 2;
    ll evenNum = 2;
    for (int i = 0; i < half; i++) {
        a[i] = evenNum;
        evenNum += 2;
    }
    ll oddNum = 1;
    for (int i = half; i < n; i++) {
        a[i] = oddNum;
        oddNum += 2;
    }
    for (auto it : a)
        cout << it << " ";
    return 0;
}