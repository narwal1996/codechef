#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
        string a, b;
        cin >> a >> b;
        unordered_map<char,int> m;
        bool res = false;
        for(int i = 0; i < a.length(); i++) m[a[i]]++;
        for(int i = 0; i < b.length(); i++) {
            if(m[b[i]]) {
                res = true;
                break;
            }
        }
        if(res) cout << "Yes" << endl;
        else    cout << "No" << endl;
	}
	return 0;
}
