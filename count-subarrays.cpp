#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        long long int res = 0, i = 0;
        while(i < n) {
            i++;
            int j = 1;
            while(i < n && a[i] >= a[i-1]) {
                i++;    j++;
            }
            res += (j*(j+1))/2;
        }
        cout << res << endl;
	}
	return 0;
}
