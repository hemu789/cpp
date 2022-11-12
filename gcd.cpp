#include <iostream>
using namespace std;

// gcd hcf

// factors of
//  25  : 1 5 25

// 15  : 1 3 5 15

// eg 56,35 gcd:7

// step1 check both no if equal return any one them
// step2 check greatest no : greatest no- smallest and repeat uptil when both are equals

int check(int n1, int n2)
{

    while (n1 != n2)
    {

        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    // both are equals

    return n1;
}
int main()
{

    int num1;
    cout << "Enter no " << endl;
    cin >> num1;

    int num2;
    cout << "Enter no " << endl;
    cin >> num2;

    int ans = check(num1, num2);

    cout << ans;

    return 0;
}