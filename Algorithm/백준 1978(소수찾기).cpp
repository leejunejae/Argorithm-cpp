#include <iostream>

using namespace std;

int main() {
	int n, tmp, count=0;
	bool isprime;

	cin >> n;

	for (int i = 0;i < n; i++)
	{
		isprime = true;
		cin >> tmp;
		if (tmp == 1)
		{
			continue;
		}
		for (int j = 2; j < tmp; j++)
		{
			if (tmp % j == 0)
			{
				isprime = false;
				break;
			}
		}

		if (tmp == 2 || tmp == 3 || isprime)
		{
			count++;
		}
	}

	cout << count;
	return 0;
}