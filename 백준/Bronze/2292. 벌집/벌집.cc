#include <iostream>
using namespace std;

int main() 
{
    int number;
    cin >> number;

    int i = 1;
    int cnt = 1;
    while (number > i) {
        i += (6 * cnt);
        cnt++;
    }
    cout << cnt;
}