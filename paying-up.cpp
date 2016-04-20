// Codechef -> EASY - "MARCHA1".
#include<bits/stdc++.h>

using namespace std;

bool isSum(int notes[], int n, int sum)
{
    if(sum == 0)
        return true;
    if(n == 0 && sum != 0)
        return false;
    if(notes[n-1] > sum)
        return isSum(notes, n-1, sum);
    else
        return isSum(notes, n-1, sum) || isSum(notes, n-1, sum-notes[n-1]);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum;
        cin >> n >> sum;
        int notes[n];
        for(int i = 0; i < n; i++)
            cin >> notes[i];
        if(isSum(notes, n, sum) == true)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
