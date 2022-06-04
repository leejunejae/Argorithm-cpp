#include <iostream>

using namespace std;

int compare(int a, int b);

int main()
{
	int x, y, w, h;
	int xwdist, yhdist, dist;

	cin >> x >> y >> w >> h;

	xwdist = w - x;
	yhdist = h - y;

	dist = compare(xwdist, x);
	dist = compare(y, dist);
	dist = compare(yhdist, dist);

	cout << dist;

	return 0;
}

int compare(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}