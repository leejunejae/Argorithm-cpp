#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	int n, tmp, index=1;
	bool valid = true;
	vector<char> pp;
	stack<int> sequence;
	
	sequence.push(0);
	cin >> n;
	
	for (int i = 0; i < n;i++)
	{
		cin >> tmp;

		while (sequence.top() < tmp)
		{
			sequence.push(index);
			pp.push_back('+');
			index++;
		}
		if(sequence.top()==tmp)
		{
		sequence.pop();
		pp.push_back('-');
		}
		else
		{
			valid = false;
		}
	}

	if (!valid)
	{
		cout << "NO" << '\n';
	}
	else
	{
		for (auto st : pp)
		{
			cout << st << '\n';
		}
	}

	return 0;
}