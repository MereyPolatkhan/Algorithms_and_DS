#include <iostream>
#include <queue>


using namespace std;




int main(){

    int n;
    cin >> n;

    int a[n];


    // built
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    int x;
    cin >> x;

    
    int mn = 100000;
    int res_index;
    for (int i = 0; i < n; i++) {
        int distance = abs(a[i] - x);
        if (mn > distance) {
            mn = distance;
            res_index = i;
        }
    }

    cout << res_index;
}
