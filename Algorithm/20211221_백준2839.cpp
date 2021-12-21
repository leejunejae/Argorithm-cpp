#include<iostream>
using namespace std;

int main()
{
	bool flag = false;
	int n, fbag, tbag, temp;
	cin >> n;
	if (n != 1 && n != 2 && n != 4 && n != 7)
	{
		fbag = n / 5;
		while (1)
		{
			temp = n-(fbag*5);
			if (temp % 3 == 0)
			{
				tbag = temp / 3;
				break;
			}
			fbag = fbag - 1;
		}
	}
	else
	{
		cout << "-1";
		return 0;
	}

	cout << fbag + tbag;
	return 0;
}