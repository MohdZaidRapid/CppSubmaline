#include<bits/stdc++.h>
// #include <unordered_map>
#include <math.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);

	freopen("output1.txt", "w", stdout);


#endif

	int n;
	cin >> n;

	int sum = 0;
	int originN = n;
	while (n > 0)
	{
		int lastDigit = n % 10;
		sum += round(pow(lastDigit, 3));
		n = n / 10;
	}
	cout << sum << endl;
	cout << originN << endl;

	if (sum == originN)
	{
		cout << "armstrong" << endl;
	}
	else
	{
		cout << "not armstrong" << endl;
	}
	// long long n;
	// cin >> n;
	// cout << n << " ";
	// while (n != 1) {
	// 	if (n % 2 == 0) {
	// 		n = n / 2;
	// 	} else {
	// 		n = (n * 3) + 1;
	// 	}
	// 	cout << n << " ";
	// }






	return 0;
}