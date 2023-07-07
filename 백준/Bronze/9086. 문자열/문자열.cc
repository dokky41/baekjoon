#include <iostream>
#include <string>

using namespace std;

int main()
{

	int count;
	string s;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> s;
		cout << s[0] << s[s.size()-1] << endl;
	}





	return 0;
}
