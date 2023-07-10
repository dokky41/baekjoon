#include <iostream>

using namespace std;

int square[100][100];

int main() 
{
	int count,sum=0;
	int x, y;

	// 색종이 수
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> x >> y;
		
		for (int j = y; j < (y+10); j++)
		{
			for (int k = x; k < (x+10); k++)
			{
				if (!square[j][k])
				{
					sum++;
					square[j][k] = 1;				
				}
			}
		}
		
	}

	std::cout << sum;
	

	return 0;
}