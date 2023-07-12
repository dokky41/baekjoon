#include <iostream>

using namespace std;

int index = 0;

int main() 
{
	int x,count;
	int * a = new int;

	cin >> x >> count;

	for (int i = x; i >= 1; i--)
	{
		if (x % i == 0)
		{
			a[index] = x / i;
			index++;
		}
	}
	
	if (index==0)
	{
		cout << "0";
	}
	else {
		cout << a[count-1] << " ";

	}


	return 0;
}