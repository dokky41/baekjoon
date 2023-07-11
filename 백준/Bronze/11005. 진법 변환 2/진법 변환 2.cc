#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
    int N, B;
    cin >> N >> B;

    string B_Num;

    while (N) {

        if (N % B < 10) { 
            B_Num += N % B + '0';
        }
        else {
            B_Num += N % B - 10 + 'A';
        }

        N /= B; 
    }

    reverse(B_Num.begin(), B_Num.end());

    cout << B_Num;



	return 0;
}