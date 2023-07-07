#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int num[6] = {1,1,2,2,2,8};
    int* now = new int[6];
    
    for (int i = 0; i < 6; i++)
    {
        cin >> now[i];
        now[i] = num[i] - now[i];
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << now[i] << " ";
    }

    return 0;
}