#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, n, k;
    // k --> no. of chambers.
    // n --> maximum allowable particles in a chamber.
    // a --> total no. of particles bombarded.
    cin >> a >> n >> k;
    int chambers[k];
    for(int i = 0; i < k; i++)
    {
        chambers[i] = a % (n+1);
        a = a / (n+1);
        cout << chambers[i] << " ";
    }
    return 0;
}
