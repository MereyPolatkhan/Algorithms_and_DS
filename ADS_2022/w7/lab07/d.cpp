#include <bits/stdc++.h> 

using namespace std;


double marks(string s) {
	if (s == "A+") return 4.00;
	if (s == "A") return 3.75;
	if (s == "B+") return 3.50;
	if (s == "B") return 3.00;
	if (s == "C+") return 2.50;
	if (s == "C") return 2.00;
	if (s == "D+") return 1.50;
	if (s == "D") return 1.00;
	if (s == "F") return 0;
}

double gpa(int m) {
	double gc = 0;
	double c = 0;
	
	for (int i = 0; i < m; i++) {
		string mark; int credit;
		cin >> mark >> credit;
		
		gc += marks(mark) * credit;
		c += credit;
	}
	return gc / c;
}

int main() {

    int n;
    cin >> n;

	vector<pair<double, string> > a;

    for (int i = 0; i < n; i++) {
        string ln, fn;
        cin >> ln >> fn;

        int m;
        cin >> m;
		
		double g = gpa(m);
		
		a.push_back({g, ln + " " + fn});
    }
	
	sort(a.begin(), a.end());
	
	for (int i = 0; i < n; i++) {
		cout << fixed;
		cout << a[i].second << " " << setprecision(3) << a[i].first << '\n';
	}
	
    return 0;
}
