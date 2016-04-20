// Codechef --> EASY - "PCYCLE".
#include<bits/stdc++.h>
#define for(a) for(int i = 0; i < a; i++)

using namespace std;

int main()
{
    int n, input, counter = 0;
    ios::sync_with_stdio(false);
    cin >> n;
    vector<int> p, permutation, result;
    for(n)
    {
        cin >> input;
        p.push_back(input);
        permutation.push_back(input);
    }
    while(!permutation.empty())
    {
        int i = find(p.begin(), p.end(), permutation[0]) - p.begin() + 1;
        result.push_back(i);
        int temp = i;
        while(p[i-1] != temp)
        {
            result.push_back(p[i-1]);
            permutation.erase(remove(permutation.begin(), permutation.end(), p[i-1]), permutation.end());
            i = p[i-1];
        }
        permutation.erase(remove(permutation.begin(), permutation.end(), p[i-1]), permutation.end());
        result.push_back(p[i-1]);
        counter++;
    }
    cout << counter << endl;
    int j = 1, temp1 = result[0];
    while(j < result.size())
    {
        cout << temp1 << " ";
        while(result[j] != temp1)
        {
            cout << result[j] << " ";
            j++;
        }
        cout << result[j++] << endl;
        temp1 = result[j++];
    }
    return 0;
}
