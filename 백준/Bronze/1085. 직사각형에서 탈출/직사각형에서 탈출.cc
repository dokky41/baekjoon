#include <iostream>

int main()
{
	int x=0, y=0, w=0, h=0;
	int res[4];
	int result = 1001;


	std::cin >> x >>  y >> w >> h;

	res[0] = h - y;
	res[1] = w - x;
	res[2] = x;
	res[3] = y;

	for (int i = 0; i < 4; i++)
	{	
		if (res[i] < result)
		{
			result = res[i];
		}
	}

	std::cout << result;

	

	return 0;
}