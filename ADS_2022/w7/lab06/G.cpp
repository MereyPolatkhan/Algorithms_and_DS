#include <bits/stdc++.h> 

using namespace std;


int main() {
	// freopen("input.txt", "r", stdin);
	int n;
	cin >> n;

	vector< pair <string, string> > a;

	for (int i = 0; i < n; i++) {
		string oldn, newn;
		cin >> oldn >> newn;

		bool flag = false;
		for (auto &x: a) {
			if (x.second == oldn) {
				x.second = newn;
				flag = true;
				break;
			}
		}
		if (flag == false) {
			a.push_back({oldn, newn});
		}
	}

	sort(a.begin(), a.end());
	cout << a.size() << "\n";
	for (auto x: a) {
		cout << x.first << " " << x.second << "\n";
	}

	return 0;
}