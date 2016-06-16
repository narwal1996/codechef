#include <iostream>
#include<string>
using namespace std;

int main()
{
	// your code goes here
	int k, n;
	cin >> k >> n;
	string a[k];
	for(int i = 0; i < k; i++)
	     cin >> a[i];
	while(n--)
	{
	     string b;
	     cin >> b;
	     bool isgood = false;
	     if(b.length() >= 47)
	          isgood = true;
	     else
	     {
	          for(int i = 0; i < k; i++)
	          {
	               if(b.find(a[i]) != string::npos)
	               {
	                    isgood = true;
	                    break;
	               }
	          }
	     }
	     if(isgood)
	          cout << "Good" << endl;
	    else
	         cout << "Bad" << endl;
	}
	return 0;
}