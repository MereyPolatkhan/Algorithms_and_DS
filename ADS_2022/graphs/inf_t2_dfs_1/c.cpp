#include <bits/stdc++.h>

using namespace std;

vector<int> g[1000];
int used[1000];



int main() {
    int n;
    cin >> n;

    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                g[i].push_back(j);
            }
        }
    }
 

    return 0;
}