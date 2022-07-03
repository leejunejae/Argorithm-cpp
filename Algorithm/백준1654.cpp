#include <iostream>
#include <vector>

using namespace std;

int findlen(vector<int> lan, int n);

int main() {
	int k, n, length;
	vector<int> lan;

	cin >> k >> n;

	for (int i = 0; i < k; i++)
	{
		cin >> length;
		lan.push_back(length);
	}

	cout << findlen(lan, n);
	
	return 0;
}

int findlen(vector<int> lan, int n)
{
	int max = 0;
	int count = 0;
	int maxsize = 0;
	long long high, mid, low = 1;

	for (int i = 0; i < lan.size();i++)
	{
		if (lan[i] > max)
			max = lan[i];
	}
	high = max;

	while (low <= high)
	{
		count = 0;
		mid = (low + high) / 2;
		for (int i = 0; i < lan.size();i++)
		{
			count = count + lan[i] / mid;
		}

		if (count >= n)
		{
			low = mid + 1;
			if (maxsize < mid)
				maxsize = mid;
		}
		else
		{
			high = mid - 1;
		}
	}

	return maxsize;
}