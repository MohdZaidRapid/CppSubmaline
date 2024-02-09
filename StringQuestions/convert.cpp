#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	char n;
	cout << "Enter the character" << endl;
	cin >> n;
	char ans = n - 'a' + 'A';
	cout << ans << endl;
	// cout << char(n - 'a' + 'A') << endl;

	// Check if n is a lowercase letter before conversion
	// if (islower(n)) {
	// 	cout << "Uppercase version: " << char(toupper(n)) << endl;
	// } else {
	// 	cout << "Not a lowercase letter" << endl;
	// }

	return 0;
}

