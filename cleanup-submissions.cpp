// Codechef --> EASY - "CLEANUP".
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, input;
        cin >> n >> m;
        int jobs[n];
        for(int i = 0; i < n; i++)
            jobs[i] = 0;    // Initially all jobs are not to be finished.
        for(int i = 0; i < m; i++)
        {
            cin >> input;
            jobs[input-1] = 1;  // This job is already completed.
        }
        int key = 1;
        for(int i = 0; i < n; i++)
        {
            if(jobs[i] == 0)
            {
                if(key == 1)
                {
                    cout << i+1 << " ";
                    jobs[i] = 1;
                    key = 0;
                }
                else
                    key = 1;
            }
        }
        cout << endl;
        for(int i = 0; i < n; i++)
            if(jobs[i] == 0)
                cout << i+1 << " ";
        cout << endl;
    }
    return 0;
}
