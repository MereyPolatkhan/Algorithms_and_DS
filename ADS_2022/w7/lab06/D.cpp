#include <bits/stdc++.h> 

using namespace std;

bool cmp(pair < pair<int, int>, int > a, pair < pair<int, int>, int > b) {
    if (a.second == b.second) {

        if (a.first.second == b.first.second) {
            return a.first.first < b.first.first;
        }

        return a.first.second < b.first.second;
    }

    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

    vector< pair < pair<int, int>, int > > a; 


    for (int i = 0; i < n; i++) {
        int d, m, y;
        char c1, c2;
        cin >> d >> c1 >> m >> c2 >> y;
        
        a.push_back({{d, m}, y});
    }

    sort(a.begin(), a.end(), cmp); 


    for (auto i: a) {
        if (i.first.first < 10) {
            cout << 0;
        }
        cout << i.first.first << "-";
        
        if (i.first.second < 10) {
            cout << 0;
        }
        cout << i.first.second << "-";
          
        cout << i.second << "\n";
    }

    return 0;
}