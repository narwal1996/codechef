// Codechef -> EASY - "HORSES".
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, input;
        cin >> n;
        vector<int> S;
        for(int i = 0; i < n; i++)
        {
            cin >> input;
            S.push_back(input);
        }
        sort(S.begin(), S.end());
        int minimum = INT_MAX;
        for(int i = 1; i < n; i++)
        {
            if(S[i]-S[i-1] < minimum)
                minimum = S[i]-S[i-1];
        }
        cout << minimum << endl;
    }
}

// using array.
/*
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, input;
        cin >> n;
        int array[n];
        for(int i = 0; i < n; i++)
            cin >> array[i]
        sort(array, array+n);
        int minimum = INT_MAX;
        for(int i = 1; i < n; i++)
        {
            if(array[i]-array[i-1] < minimum)
                minimum = array[i]-array[i-1];
        }
        cout << minimum << endl;
    }
}


int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
        cin >> array[i];
    sort(array, array + n);
    for (int i = 0; i < n; ++i)
        cout << array[i] << " ";
}

*/
