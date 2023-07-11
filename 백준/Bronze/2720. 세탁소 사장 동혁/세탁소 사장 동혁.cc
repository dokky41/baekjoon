#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
	int count=1;
	
	int s[4] = {25,10,5,1};
	int b;

	cin >> count;
	int * a = new int[count];

	for (int i = 0; i < count; i++)
	{
		cin >> a[i];
		
	}
	
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			b = a[i] / s[j];
			a[i] -= s[j] * b;
			cout << b << " ";
		}
		cout << endl;
	}



	return 0;
}