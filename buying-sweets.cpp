#include<iostream>

using namespace std;

int main()
{
    int t;
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], sum  = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] <= sum%x)
            {
                cout << -1 << endl;
                break;
            }
            else if(i == n-1)
                cout << sum/x << endl;
        }
    }
    return 0;
}
