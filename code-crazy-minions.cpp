#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin >> t;
     while(t--)
     {
          string str;
          cin >> str;
          int base = (int)'a';
          int x = 0;
          for(int i = 1; i < str.length(); i++)
          {
               int curr = (int)str[i], prev = (int)str[i-1];
               
               if(curr >= prev)
                    x += curr - prev;
               else
                    x += (25 - (prev-base)) + (curr - base + 1);
          }
          
          x += str.length()+1;
          
          cout << (x <= 11*str.length() ? "YES" : "NO") << endl;
     }
     return 0;
}
