#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int arr[26] = { 0, };
    int max = 0;
    char alpha = ' ';

    cin >> s;

	for (char a : s)
	{
		if ('a' <= a)
			a = a - 32;

		arr[a - 'A']++;
	}
   
	for (int i = 0; i <= 'Z' - 'A'; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			alpha = i + 'A';
		}
		else if (arr[i] == max)
			alpha = '?';
	}

	std::cout << alpha;


    return 0;
}