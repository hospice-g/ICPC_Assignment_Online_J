#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<ll> kadane(vector<ll> &v, ll n) {
    vector<ll> ans;
    ll max_ending_here = 0, max_so_far = LONG_LONG_MIN;
    for (int i = 0; i < n; ++i) {
        max_ending_here += v[i];
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
        ans.push_back(max_ending_here);
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }
    return ans;
}

int main() {
    int n;
    while(cin >> n){
        vector<ll> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        vector<ll> normal = kadane(v, n);
        reverse(v.begin(), v.end());
        vector<ll> reversed = kadane(v, n);
        reverse(v.begin(), v.end());


        for (int i = 0; i < n; ++i) {
            cout << max(normal[i], max(reversed[n - i - 1], reversed[n - i - 1] + normal[i] - v[i])) <<" ";
        }
        cout<<"\n";
    }
    
}