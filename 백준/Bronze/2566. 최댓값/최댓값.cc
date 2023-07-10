#include <iostream>

using namespace std;

int main() 
{
	int A[9][9]; 
	int max = 0;
	int row=0, col=0;
	
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> A[i][j];

			if (A[i][j] > max)
			{
				max = A[i][j];
				row = i;
				col = j;
			}
		}
	}

	cout << max << endl;
	cout << row + 1 << " " << col + 1 << endl;;




	return 0;
}