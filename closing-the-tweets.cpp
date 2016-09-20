#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n+1];
    memset(a, 0, sizeof(a));
    int sum = 0;
    for(int j = 0; j < k; j++) {
        string s;
        cin >> s;
        if(s == "CLICK") {
            int tweet;
            cin >> tweet;
            a[tweet] ^= 1;
            if(a[tweet] == 1)   sum++;
            else    sum--;
        } else {
            sum = 0;
            memset(a, 0, sizeof(a));
        }
        cout << sum << endl;
    }
	return 0;
}
