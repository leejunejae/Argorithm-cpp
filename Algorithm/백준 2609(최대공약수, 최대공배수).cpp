#include <iostream>

using namespace std;

int main() {
	int n, m, min, max, cord, corm;

	cin >> n >> m;

	if (n < m)
	{
		min = n;
		max = m;
	}
	else
	{
		min = m;
		max = n;
	}

	cord = max % min;

	while (cord!=0)
	{
		max = min;
		min = cord;
		cord = max % min;
	}
	cord = min;
	corm = (n * m) / cord;

	cout << cord << '\n';
	cout << corm << endl;

	return 0;
}