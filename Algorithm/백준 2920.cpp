#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    int state = 0, temp = 0;
    array <int, 8> n;

    for (int i = 0; i < 8; i++)
    {
        cin >> n.at(i);
        if (temp != 0)
        {
            if (state != 2 && n[i] - temp == 1)
            {
                state = 1;
            }
            else if (state != 1 && n[i] - temp == -1)
            {
                state = 2;
            }
            else
            {
                state = 3;
                break;
            }
        }
        temp = n[i];
    }

    switch (state)
    {
    case 1:
        cout << "ascending";
        break;
    case 2:
        cout << "descending";
        break;
    case 3:
        cout << "mixed";
        break;
    }
    return 0;
}