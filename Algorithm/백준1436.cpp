#include <iostream>
#include <string>

using namespace std;

void findn(int n);

int main(){
	int n;

	cin >> n;

	findn(n);
	return 0;
}

void findn(int n)
{
	int series = 0;
	int i = 666;
	string number;
	while (1)
	{
		number = to_string(i);
		for (int j = 0; j < number.length()-2;j++)
		{
			if (number[j] == '6' && number[j+1]=='6' && number[j + 2] == '6')
			{
				series++;
				if (series == n)
				{
					cout << i;
					return;
				}
				break;
			}
		}
		i++;
	}
}