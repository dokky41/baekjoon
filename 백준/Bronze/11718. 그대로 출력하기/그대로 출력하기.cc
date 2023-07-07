#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
   
    while (true)
    {
        getline(cin, s);
        if (s == "") break;

        std::cout << s << '\n';


    }


    return 0;
}