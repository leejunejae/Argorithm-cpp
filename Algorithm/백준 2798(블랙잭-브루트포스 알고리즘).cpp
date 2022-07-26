#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, tmp, min=300000, value, result=0;
	vector<int> card;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		card.push_back(tmp);
	}

	for (int i = 0; i < n - 2; i++)
	{
		if (card[i] > m)
			continue;
		for (int j = i + 1; j < n - 1; j++)
		{
			if (card[i] + card[j] > m)
				continue;
			for (int k = j + 1; k < n; k++)
			{
				value = card[i] + card[j] + card[k];
				if (value <= m && min > m - value)
				{
					min = m - value;
					result = value;
				}
			}
		}
	}

	cout << result;

	return 0;
}