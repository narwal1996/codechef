    #include<bits/stdc++.h>
    using namespace std;

    bool isprime(int n) {
        if(n < 2)   return false;
        for(int i = 2; i <= sqrt(n); i++)
            if(n%i == 0)    return false;
        return true;
    }

    int divisors(int n, int a) {
        int num = 0;
        while(n && n%a == 0) {
            num++;
            n /= a;
        }
        return num;
    }

    int main() {
        int t;
        cin >> t;
        vector<int> sieve(1001, 1);
        unordered_map<int,int> m;
        sieve[0] = sieve[1] = 0;
        for(int i = 2; i <= 1000; i++) {
            if(sieve[i] == 1) {
                int temp = 2*i;
                while(temp <= 1000) {
                    sieve[temp] = 0;
                    temp += i;
                }
            }
        }
        while(t--) {
            int n;
            cin >> n;
            long long int res = 1;
            m.clear();
            while(n--) {
                int a;
                cin >> a;
                for(int k = 2; k <= sqrt(a); k++) {
                    if(sieve[k] == 1) {
                        while(a%k == 0) {
                            m[k]++;
                            a /= k;
                        }
                    }
                }
                if(a>1 && isprime(a))   m[a]++;
            }
            for(auto it = m.begin(); it != m.end(); it++)   res *= (it->second + 1);
            cout << res << endl;
        }
        return 0;
    }
