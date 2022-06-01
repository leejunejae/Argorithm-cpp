#include <iostream>
#include <string>

using namespace std;

int CB_first(int x, int y);
int CW_first(int x, int y);

string board[50];

string BW[8] = {
"BWBWBWBW",
"WBWBWBWB",
"BWBWBWBW",
"WBWBWBWB",
"BWBWBWBW",
"WBWBWBWB",
"BWBWBWBW",
"WBWBWBWB"
};

string WB[8] = {
"WBWBWBWB",
"BWBWBWBW",
"WBWBWBWB",
"BWBWBWBW",
"WBWBWBWB",
"BWBWBWBW",
"WBWBWBWB",
"BWBWBWBW"
};

int main()
{
	int n, m, npaint, re_paint=50;
	char temp;
	
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> temp;
			board[i].push_back(temp);
		}
	}

	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			npaint = min(CB_first(i, j), CW_first(i, j));
			if (npaint < re_paint)
				re_paint = npaint;
		}
	}

	cout << re_paint;
	return 0;
}

int CB_first(int x, int y)
{
	int count=0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[x + i][y + j] != BW[i][j])
				count++;
		}
	}

	return count;
}

int CW_first(int x, int y)
{
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[x + i][y + j] != WB[i][j])
				count++;
		}
	}

	return count;
}