#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c;

	while (1)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a* a + b * b = c * c || c * c + b * b = a * a || a * a + c * c = b * b)
		{
			cout << "right";
		}
		else
		{
			cout << "wrong";
		}
	}
	
	return 0;
}