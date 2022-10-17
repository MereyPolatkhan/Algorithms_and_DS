#include <iostream>

using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[i], arr[high]);
    return i;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quick_sort(arr, low, p - 1);
        quick_sort(arr, p + 1, high);
    }
}

void solve() {
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    string s1, s2;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            s1 += s[i];
        }
        else {
            s2 += s[i];
        }
    }   

    cout << s1 << " " << s2;
    
}

int main() {

 
    int a[] = {1, 5, 1, 23, 5, 1, 100};
    quick_sort(a, 0, 6);
    for (int i = 0; i < 7; i++) cout << a[i] << " ";

    return 0;
}