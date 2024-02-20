#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;
	int originN = n;
	while (n > 0)
	{
		int lastDigit = n % 10;
		sum += pow(lastDigit, 3);
		n = n / 10;
	}

	if (sum == originN)
	{
		cout << "number is armstrong" << endl;
	}
	else
	{
		cout << "not armstrong number" << endl;
	}

	return 0;
}