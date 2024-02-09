
#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n,) {

	if (n <= 1) {
		return n;
	}

	if (dp[n] != = -1) {
		return dp[n];
	}

	return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);



}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	cout << "Hello dynamic programming" << endl;

	int n ;
	cin >> n;
	int ans = fibonacci(n);
	cout << ans;
	return 0;
}
