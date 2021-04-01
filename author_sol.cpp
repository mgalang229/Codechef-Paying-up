#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool checker = false;
		// run a loop until 2 ^ n (total number of subsets in a set)
		for (int i = 1; i < (1 << n); i++) {
			int sum = 0;
			for (int j = 0; j < n; j++) {
				// check if bits of the i-th number matches the bits of (2 ^ j)-th number
				if (i & (1 << j)) {
					// if it matches, then add the corresponding element
					sum += a[j];
				}
			}
			if (sum == m) {
				// if the sum is already 'm', then it means that there is a subset
				// don't forget to break the loop
				checker = true;
				break;
			}
		}
		cout << (checker ? "Yes" : "No") << '\n';
	}
	return 0;
}
