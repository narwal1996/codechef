// Codechef --> EASY - "LEPERMUT".
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    ios::sync_with_stdio(false);
    while(t--)
    {
        int n, counter_inversions = 0, counter_local_inversions = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];
        for(int i = 0; i < n-1; i++)
            for(int j = i+1; j < n; j++)
                if(a[i] > a[j])
                    counter_inversions++;
        for(int i = 0; i < n-1; i++)
            if(a[i] > a[i+1])
                counter_local_inversions++;
        if(counter_inversions == counter_local_inversions)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
