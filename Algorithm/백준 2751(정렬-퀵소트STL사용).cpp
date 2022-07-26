#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, tmp;
	vector<int> srt;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		srt.push_back(tmp);
	}

	sort(srt.begin(), srt.end());

	for (auto ch : srt)
	{
		cout << ch << '\n';
	}

	return 0;
}