#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;  
    list<char> editor;
    auto cursor = editor.begin();

    while (n--)
    {
        cin >> s;
        for (int i=0; i<s.length(); i++)
        {
            if (s[i] == '<')
            {
                if(cursor != editor.begin())
                    cursor--;
            }
            else if (s[i] == '>')
            {
                if(cursor != editor.end())
                    cursor++;
            }
            else if (s[i] == '-')
            {
                if(cursor != editor.begin())
                    cursor=editor.erase(--cursor);
            }
            else
            {
                editor.insert(cursor, s[i]);
            }
        }

        for (char ptr : editor)
        {
            cout << ptr;
        }
        cout << endl;
        editor.clear();
        cursor = editor.begin();
    }


    
    return 0;
}