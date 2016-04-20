/* Codechef --> EASY - "LAPINDROME".
Lapindrome is defined as a string which when split in the middle, gives two halves
having the same characters and same frequency of each character. If there are odd
number of characters in the string, we ignore the middle character and check for
lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have
the same characters with same frequency. Also, abccab, rotor and xyzxy are a few
examples of lapindromes. Note that abbaab is NOT a lapindrome.
The two halves contain the same characters but their frequencies do not match.
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int temp = 0;
        int frequency[26];  // frequency array
        for(int i = 0; i < 26; i++)
            frequency[i] = 0;

        // frequency of each alphabet in first half.
        for(int i = 0; i < s.length()/2; i++)
            frequency[(int)s[i] - (int)'a']++;

        int i = (s.length()%2 == 0) ? s.length()/2 : s.length()/2 + 1;

        // For frequency of each alphabet to be same on both left and right halves,
        // frequency array should have all entries as 0.
        for(i ; i < s.length(); i++)
            frequency[(int)s[i] - (int)'a']--;

        for(int i = 0; i < 26; i++)
            if(frequency[i] == 0)
                temp++;

        if(temp == 26)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
