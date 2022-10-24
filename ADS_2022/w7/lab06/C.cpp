#include <bits/stdc++.h> 

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int mn = 1e8;

    for (int i = 0; i < n - 1; i++) {
        mn = min(mn, abs(a[i] - a[i + 1]));
    }

    vector<int> res;

    for (int i = 0; i < n - 1; i++) {
        int d = abs(a[i] - a[i + 1]);

        if (d == mn) {
            res.push_back(a[i]);
            res.push_back(a[i + 1]);
        }
    }

    for (auto i: res){
        cout << i << " " ;
    }


    return 0;
}