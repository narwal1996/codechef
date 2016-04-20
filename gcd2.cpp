// Codechef --> EASY - "GCD2".
#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    else
        return gcd(b%a, a);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, temp;
        cin >> a >> b;
        if(a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        cout << gcd(a, b) << endl;
    }
    return 0;
}
