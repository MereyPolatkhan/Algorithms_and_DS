#include <bits/stdc++.h>
using namespace std;

void check(int n){
    for (int i = 2; i <= ceil(sqrt(n)); i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}

int main (){
    int n;
    cin >> n;
 
    check(n);
}