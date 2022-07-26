#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, left=0, right=0;
	string vps;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> vps;
		for (int j = 0; j < vps.length(); j++)
		{
			if (vps[j] == '(')
			{
				left++;
			}
			else
			{
				if (right >= left)
				{
					cout << "NO" << '\n';
					break;
				}
				right++;
			}

			if (j == vps.length()-1)
			{
				if (right == left)
				{
					cout << "YES" << '\n';
				}
				else
				{
					cout << "NO" << '\n';
				}
			}
		}

		left = 0;
		right = 0;
	}

	return 0;
}