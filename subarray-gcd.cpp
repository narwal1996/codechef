    #include <iostream>
    using namespace std;
     
    int gcd(int a, int b)
    {
         if(b == 0)
              return a;
         return gcd(b, a%b);
    }
     
    int main()
    {
    	int t;
    	cin >> t;
    	while(t--)
    	{
    	     int n;
    	     scanf("%d", &n);
    	     int a[n], len = 1;
    	     scanf("%d", &a[0]);
    	     int Gcd = a[0];
    	     for(int i = 1; i < n; i++)
    	     {
    	          scanf("%d", &a[i]);
    	          if(Gcd != 1)
    	               Gcd = ((a[i] > Gcd) ? gcd(a[i], Gcd) : gcd(Gcd, a[i]));
    	     }
    	     if(Gcd == 1)
    	          cout << n << endl;
    	     else
    	          cout << -1 << endl;
    	}
    	return 0;
    }
