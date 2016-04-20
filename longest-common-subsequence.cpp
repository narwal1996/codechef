#include<iostream>

using namespace std;

int main()
{
    int t;
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--)
    {
        string j, s;
        cin >> j >> s;
        // cout << lcs(j, s, j.length(), s.length()) << endl;
        int counter = 0;
        for(int i = 0; i < s.length(); i++)
            for(int k = 0; k < j.length(); k++)
                if(s[i] == j[k])
                {
                    counter++;
                    break;
                }
        cout << counter << endl;
    }
    return 0;
}
