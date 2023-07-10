#include <iostream>

using namespace std;

int main() 
{
	int row, col;
	
	cin >> row >> col;
	
	int A[101][101]; 
	int B[101][101]; 
	int SUM[101][101]; 
	
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			cin >> A[i][j];
		}
			
	
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			cin >> B[i][j];
		}

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			SUM[i][j] = A[i][j] + B[i][j];
		}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << SUM[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}