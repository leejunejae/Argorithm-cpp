#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
	array<int, 26> arr;
	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}
	string word;
	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		if (arr.at((int)(word[i]-97)) == -1)
		{
			arr.at((int)(word[i] - 97)) = i;
		}
	}

	for (int i=0; i<arr.size(); i++)
	{
		cout << arr.at(i) << " ";
	}
}