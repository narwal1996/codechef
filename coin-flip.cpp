// Codechef --> EASY - "COIN-FLIP".
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int g;  // number of games played by each elephant.
        cin >> g;
        while(g--)
        {
            int i, n, q;
            // i --> 1(when initially all head), else 2.
            // n --> number of rounds.
            // q --> if 1 -> output no. of final heads, else output no. of tails.
            cin >> i >> n >> q;
            if(n%2 == 0 || i == q)
                cout << n/2 << endl;
            else
                cout << n/2 + 1 << endl;
        }
    }
    return 0;
}
