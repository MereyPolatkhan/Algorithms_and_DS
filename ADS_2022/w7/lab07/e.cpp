#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, vector<int>> a, pair<int, vector<int>> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}   

int main(){

    int n, m;
    cin >> n >> m;
    vector< pair<int, vector<int>> > a;

    for (int i = 0; i < n; i++) {
        vector<int> t;
        int sum = 0;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            t.push_back(x);
            sum += x;
        }
        a.push_back({sum, t});
    }

    sort(a.begin(), a.end(), cmp);
    // cout << endl;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].second.size(); j++) {
            cout << a[i].second[j] << " ";

        }
        cout << "\n";
    }

    
    
    return 0;
}