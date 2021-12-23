#include<iostream>
using namespace std;

int main() {
	int n, temp;
	cin >> n;
	int array[n];
	for (int i = 0;i < n;i++)
	{
		cin >> array[i];
	}
	
	for (int j = 0;j < n-1;j++)
	{
		for (int k = j+1; k < n; k++)
		{
			if (array[j] > array[k])
			{
				temp = array[k];
				array[k] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (i + 1 < n && array[i] == array[i + 1])
			continue;
		cout << array[i] << endl;
	}
}