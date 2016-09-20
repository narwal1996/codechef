#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int root = 0;
		int n;
		cin >> n;
        unordered_map<int,int> ids;
		for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            ids[a]++;
            root += (a-b);
		}
		for(int i = 0; i < ids[root]; i++)
            cout << root << " ";
        cout << endl;
	}
	return 0;
}
