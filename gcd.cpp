#include <iostream>
using namespace std;

// gcd hcf(highest value)

// factors of
//  25  : 1 5 25

// 15  : 1 3 5 15

// eg 56,35 gcd:7
//eg 24,36 gcd:12(highest value)


//lcm of 15,24 is 120  ,  18,24:72

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



int findlcm(int n1, int n2){
    // int Lcm= a×b / gcd(a, b);
    //formula of lcm
    int gcd=check(n1,n2);

    int lcm=n1*n2/gcd;

    return lcm;
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


    cout<<"GCD OF TWO NO's is "<<endl;
    cout << ans<<endl;


    int ans2=findlcm(num1,num2);
    cout << "lCM OF TWO NO's is " << endl;
    cout<< ans2<<endl;
    return 0;
}