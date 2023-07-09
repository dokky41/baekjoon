#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << " ";
        }

        for (int k = 0; k < i*2-1; k++)
        {
            std::cout << "*";
        }
        std::cout << endl;
    }
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < 2*n-2*i-1; k++)
        {
            cout << "*";
        }
        
        std::cout << endl;
    }



    return 0;
}