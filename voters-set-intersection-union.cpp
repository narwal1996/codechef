#include<bits/stdc++.h>
#define for(a) for(int i = 0; i < a; i++)

using namespace std;

int main()
{
    int n1, n2, n3, input;
    ios::sync_with_stdio(false);
    vector<int> A, B, C, AB, BC, CA, AB_BC, BC_CA;
    for(n1)
    {
        cin >> input;
        A.push_back(input);
    }
    for(n2)
    {
        cin >> input;
        B.push_back(input);
    }
    for(n3)
    {
        cin >> input;
        C.push_back(input);
    }
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(AB));
    set_intersection(B.begin(), B.end(), C.begin(), C.end(), back_inserter(BC));
    set_intersection(C.begin(), C.end(), A.begin(), A.end(), back_inserter(CA));
    set_union(AB.begin(), AB.end(), BC.begin(), BC.end(), back_inserter(AB_BC));
    set_union(BC.begin(), BC.end(), CA.begin(), CA.end(), back_inserter(BC_CA));
    return 0;
}
