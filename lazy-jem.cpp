#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int problems, b;
        long long int m;
        cin >> problems >> b >> m;
        long long int time = 0;
        int n = problems;
        while(n) {
            if(n < problems)    time += b;
            int solve;
            if(n&1) solve = (n+1)/2;
            else    solve = n/2;
            n -= solve;
            time += solve*m;
            m *= 2;
        }
        cout << time << endl;
    }
}
