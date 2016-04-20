// Codechef --> EASY - "JOHNY".
// Given an array with unique numbers, and a position of a number,
// Find the position of that number in the sorted array.
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int counter = 0, k;  // Initial position of number.
        cin >> k;
        // Find the total number of numbers less than the
        // number to be found --> O(n).
        for(int i = 0; i < n; i++)
            if(a[i] < a[k-1])
                counter++;
        cout << counter+1 << endl;
    }
    return 0;
}
