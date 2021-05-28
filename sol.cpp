#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		n *= 2;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// to solve the problem, an element must NOT be the arithmetic mean
		// of its two adjacent elements ((previous + next) / 2) != current
		// in simple terms, the array must NOT be in order
		// first, sort the array in non-decreasing order
		sort(a.begin(), a.end());
		for (int i = 0; i < n - 1; i++) {
			if (i % 2 == 1) {
				// if the current element is in the middle of two elements then,
				// swap the current and next elements so that it will not be
				// the arithmetic mean of the previous and next elements (former)
				swap(a[i], a[i + 1]);
			}
		}
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
