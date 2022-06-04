#include <iostream>

using namespace std;

void recursion(int n);
void print_();

int nrecur = 0;

int main()
{
	int n;
	cin >> n;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;

	recursion(n);

	return 0;
}

void recursion(int n)
{
	if (n == 0)
	{
		print_();
		cout << "\"����Լ��� ������?\"\n";
		print_();
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	}
	else
	{
		print_();
		cout << "\"����Լ��� ������?\"\n";
		print_();
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		print_();
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		print_();
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	}

	if (n > 0)
	{
		nrecur++;
		recursion(n - 1);
	}

	print_();
	cout << "��� �亯�Ͽ���.\n";
	nrecur--;
}

void print_()
{
	for (int i = 0; i < nrecur; i++)
		cout << "____";
}