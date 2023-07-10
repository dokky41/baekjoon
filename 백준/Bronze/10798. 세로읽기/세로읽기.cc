#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string A[5];
	string sum;


	for (int i = 0; i < 5; i++)
	{
		std::cin >> A[i];
	}

	
	
	for (int i = 0; i < 15; i++)
	{
			for (int j = 0; j < 5; j++)
			{
				if (i < A[j].size())
				{
					sum += A[j][i];
				}
			}
	}
	

	std::cout << sum;


	return 0;
}