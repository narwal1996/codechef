#include <iostream>
#include<string>
using namespace std;

int main()
{
	// your code goes here
	long long int n, m;
	cin >> n >> m;
	while(m--)
	{
	     long long int q;
	     cin >> q;
	     if (q <= n+1)
	          cout << 0 << endl;
	     else
	     {
               if(q <= (3*n + (n+2))/2)
                    cout << q-(n+2)+1 << endl;    // distance from left end.
               else
                    cout << 3*n - q + 1 << endl;  // distance from right end.
	     }
	}
	return 0;
}