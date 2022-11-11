#include <iostream>
using namespace std;

int check(string &s)
{

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{

    // string s = "geeksforgeeks";
    string s = "abccdbc";

    int ind = check(s);

    if (ind == -1)
    {
        cout << "Not present";
    }
    else
    {
        cout << "Present at index " << ind << endl;
    }

    return 0;
}