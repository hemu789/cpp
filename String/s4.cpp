#include <iostream>
using namespace std;

bool check(string &s1, string &s2, int m, int n)
{

    int j = 0;
    for (int i = 0; i < m && j < n; i++)
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
    }
    return (j == n);
}
int main()
{

    string s1 = "abcd";
    int m = s1.size();
    string s2 = "ad";
    int n = s2.size();
    bool ans = check(s1, s2, m, n);
    cout << ans;
    return 0;
}