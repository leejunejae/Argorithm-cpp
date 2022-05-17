#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    bool isword=false;
    int wordn=0;
    getline(cin, sentence);
    
    for (auto temp : sentence)
    {
        if (temp == ' ')
        {
            if (isword)
            {
                wordn++;
                isword = false;
            }
        }
        else
        {
            isword = true;
        }
    }
    if (isword)
        wordn++;

    cout << wordn;
    return 0;
}