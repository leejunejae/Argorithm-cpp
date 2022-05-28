#include <iostream>

using namespace std;

int main()
{
	int a, b, ra = 0, rb = 0;
	cin >> a >> b;

	ra = (a - (a / 10) * 10) * 100 + ((a - (a / 100) * 100) / 10) * 10 + a / 100;
	rb = (b - (b / 10) * 10) * 100 + ((b - (b / 100) * 100) / 10) * 10 + b / 100;

	if (ra > rb)
		cout << ra;
	else
		cout << rb;
}