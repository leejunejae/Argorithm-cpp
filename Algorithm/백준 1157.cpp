#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 26> alpha = { 0 };
    string word;
    int max = -1, index = -1;
    bool isequal=false;

    
    cin >> word;

    for (int i=0; i<word.length(); i++)
    {
        if (word[i] > 90)
        {
            alpha[word[i] - 97]++;
        }
        else
        {
            alpha[word[i] - 65]++;
        }
    }

    for (int i=0; i<alpha.size();i++)
    {
        if (alpha.at(i) > max)
        {
            max = alpha[i];
            index = i;
            isequal = false;
        }
        else if (alpha.at(i) == max)
        {
            isequal = true;
        }
    }

    if (isequal)
        cout << "?";
    else
        cout << (char)(index + 65);
    return 0;
}