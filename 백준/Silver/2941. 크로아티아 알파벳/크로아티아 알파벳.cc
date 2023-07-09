#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec
        = { "c=","c-","dz=","d-","lj","nj","s=","z="};
    
    int cnt = 0;
    string s;

    cin >> s;

    for (int i = 0; i < vec.size(); i++)
    {
        while (true)
        {    
            if (s.find(vec[i]) != -1)
            {
                s.replace(s.find(vec[i]), vec[i].length(), "a");
            }
            else
            {
                break;
            }
      
        }

    }

    cout << s.length();

    return 0;
}