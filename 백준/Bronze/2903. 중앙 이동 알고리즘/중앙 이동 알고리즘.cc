#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
	int n;

	int x = 2;

	cin >> n;

	while (n--) {
		x = x*2 - 1;
	}

	x *= x;

	cout << x << endl;


	return 0;
}