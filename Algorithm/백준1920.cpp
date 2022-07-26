#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int m, n;
	bool isprime = true;
	vector<int> nprime;
	nprime.push_back(2);
	nprime.push_back(3);

	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		for (int j = 0;j < nprime.size; j++)
		{
			if (i% nprime[j] == 0)
			{
				isprime = false;
			}
		}

		if (isprime = true)
		{
			nprime.push_back(i);
		}

		isprime = false;
	}

	for (auto ch : nprime)
	{
		cout << ch << '\n';
	}

	return 0;
}