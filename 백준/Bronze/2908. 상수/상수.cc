#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n1, n2;
    string num1, num2;


    cin >> num1;
    cin >> num2;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    n1 = stoi(num1);
    n2 = stoi(num2);

    if (n1 > n2)
    {
        cout << n1;
    }
    else
    {
        cout << n2;
    }


    return 0;
}