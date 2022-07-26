#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int m, n, j=2;
	bool isprime = true;
	vector<int> nprime;

	cin >> m >> n;

	for (int i = 2; i <= n; i++)
	{
		nprime.push_back(i);
	}

	for (int i = 2; i <= n / 2; i++)
	{
		while (1)
		{
			if (i * j > n)
			{
				j = 2;
				break;
			}
			else
			{
				nprime[i * j - 2] = 0;
				j++;
			}
		}
	}

	for (auto ch : nprime)
	{
		if (ch != 0 && ch >= m)
		{
			cout << ch << '\n';
		}
	}

	return 0;
}