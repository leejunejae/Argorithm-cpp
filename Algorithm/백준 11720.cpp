#include <iostream>

using namespace std;

int main()
{
    int num, sum=0;
    char a;
    cin >> num;
    while (num--)
    {
        cin >> a;
        
        sum += a - 48;
    }

    cout << sum;
    return 0;
}