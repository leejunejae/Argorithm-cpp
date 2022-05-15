#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n;
    char input;
    string s;   
    cin >> s;
    cin >> n;
    list<char> editor(s.begin(), s.end());
    auto cursor = editor.end();

    while (n--)
    {
        cin >> input;
        if (input == 'L')
        {
            if (cursor != editor.begin())
            {
                cursor--;
            }
        }
        else if (input == 'D')
        {
            if (cursor != editor.end())
            {
                cursor++;
            }
        }
        else if (input == 'B')
        {
            if (cursor != editor.begin())
            {
                cursor = editor.erase(--cursor);
            }
        }
        else if (input == 'P')
        {
            cin >> input;
            editor.insert(cursor, input);
        }
    }

    for (char ptr : editor)
    {
        cout << ptr;
    }
    
    return 0;
}