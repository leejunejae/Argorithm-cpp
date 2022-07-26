#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, last, tmp;
	queue<int> dec;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		dec.push(i);
	}

	while (!dec.empty())
	{
		last = dec.front();
		dec.pop();
		if (!dec.empty())
		{
			tmp = dec.front();
			dec.pop();
			dec.push(tmp);
		}
	}

	cout << last;

	return 0;
}