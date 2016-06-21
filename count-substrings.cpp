#include <bits/stdc++.h>

using namespace std;

/* Find total number of 1's in the given string. 
   Let suppose that the total number of 1's in the string is n , 
   then the answer is (n*(n+1))/2.
*/
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	     int n;
	     long long int n_ones = 0;
	     cin >> n;
	     string str;
	     cin >> str;
	     for(int i = 0; i < str.length(); i++)
	          if((int)str[i] == '1')
	               n_ones++;
	     if(n_ones == 1)
	          cout << 1 << endl;
	     else
	          cout << (n_ones*(n_ones+1))/2 << endl;
	}
	return 0;
}
