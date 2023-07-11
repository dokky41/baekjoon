#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
	string s;
	int b, result=0;

	cin >> s >> b;

	for (int i = s.length() - 1; i >= 0; i--)
	{
		if ('0' <= s[i] && s[i] <= '9')
			result += (s[i] - '0') * pow(b,s.length() - i-1);
		else
			result += (s[i] - 'A'+10) * pow(b, s.length() -i-1);
	}

	cout << result;

	return 0;
}