#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int a = 1;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size()-i-1])
        {
            a = 0;
        }

    }

    cout << a;


    return 0;
}