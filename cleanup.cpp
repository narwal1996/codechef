// Codechef --> EASY - "CLEANUP".
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;  // test cases.
    cin >> t;
    while(t--)  // while t is positive.
    {

        int n, m;
        cin >> n >> m;
        vector<int> jobs;

        for(int k = 0; k < n; k++)
            jobs.push_back(k+1);

        for(int j = 0; j < m; j++)
        {
            int input;
            cin >> input;
            jobs[input-1] = -1;
        }

        // remove -> doesn't delete the elements, just puts the elements at
        // back of container. Returns the pointer to first element of updated.
        // erase -> deleted the element from the container.

        jobs.erase(remove(jobs.begin(), jobs.end(), -1), jobs.end());
        for(int j = 0; j < jobs.size(); j += 2)
            cout << jobs[j] << " ";
        cout << endl;

        if(jobs.size() == 1)
            cout << endl;

        else
        {
            for(int k = 1; k < jobs.size(); k += 2)
                cout << jobs[k] << " ";
            cout << endl;
        }

    }

}
