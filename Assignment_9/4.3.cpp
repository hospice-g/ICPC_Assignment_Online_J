#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(cin >> n){
        int A = INT_MIN, B = INT_MAX, C = INT_MIN, D = INT_MAX;
    int a, b, c, d;
    a = b = c = d = 1;
    vector<int> f(n), s(n);
    vector<int> x(n), y(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
        if (A < x[i] + y[i]) {
            A = x[i] + y[i];
            a = i+1;
        }
        if (B > x[i] + y[i]) {
            B = x[i] + y[i];
            b = i+1;
        }
        if (C < x[i] - y[i]) {
            C = x[i] - y[i];
            c = i+1;
        }
        if (D > x[i] - y[i]) {
            D = x[i] - y[i];
            d = i+1;
        }
        if (A - B > C - D) {
            f[i] = a;
            s[i] = b;
        } else {
            f[i] = c;
            s[i] = d;
        }
    }

        for (int i = 0; i < n; ++i) {
            cout << f[i] << ' ' << s[i] << endl;
        }
    }
}