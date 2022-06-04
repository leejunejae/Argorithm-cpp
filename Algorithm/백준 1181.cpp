#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b);

int main()
{
	bool isequal = false;
	int n;
	string word;
	vector<string> cont;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> word;
		for (int j = 0;j < cont.size();j++)
		{
			if (cont[j] == word)
			{
				isequal = true;
				break;
			}
		}

		if (!isequal)
			cont.push_back(word);

		isequal = false;
	}
	sort(cont.begin(), cont.end(), compare);

	for (auto temp : cont)
	{
		cout << temp << '\n';
	}

	return 0;
}

bool compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}