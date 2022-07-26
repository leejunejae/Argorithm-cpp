#include <iostream>
#include <queue>

using namespace std;

int main() {
	int test, n, m, ipt, count;
	cin >> test;

	for (int i = 0; i < test; i++)
	{
		count = 0;
		cin >> n >> m;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		for (int j = 0; j < n; j++)
		{
			cin >> ipt;
			q.push({ j, ipt });
			pq.push(ipt);
		}
		while (!q.empty())
		{
			if (q.front().second == pq.top())
			{
				++count;
				if (q.front().first == m)
				{
					cout << count << endl;
					break;
				}
				q.pop();
				pq.pop();
			}
			else
			{
				q.push({ q.front().first,q.front().second });
				q.pop();
			}
		}
	}

	return 0;
}