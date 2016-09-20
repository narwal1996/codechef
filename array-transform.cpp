#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        bool res = false;
        unordered_map<int,int> m;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            int r = temp%(k+1);
            m[r]++;
            if(m[r] > n-2)  res = true;
        }
        if(res)  cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
	return 0;
}

