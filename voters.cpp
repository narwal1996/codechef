// Codechef --> EASY - "VOTERS".
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int list1[n1], list2[n2], list3[n3];
    for(int i = 0; i < n1; i++)
        cin >> list1[i];
    for(int i = 0; i < n2; i++)
        cin >> list2[i];
    for(int i = 0; i < n3; i++)
        cin >> list3[i];

    int c1 = 0, c2 = 0, c3 = 0, counter = 0;
    vector<int> output;
    while(c1 < n1 && c2 < n2 && c3 < n3)
    {
        if(list1[c1] == list2[c2])
        {
            output.push_back(list1[c1]);
            counter++;
            c1++;   c2++;
        }
        else if(list2[c2] == list3[c3])
        {
            output.push_back(list2[c2]);
            counter++;
            c2++;   c3++;
        }
        else if(list1[c1] == list3[c3])
        {
            output.push_back(list1[c1]);
            counter++;
            c1++;   c3++;
        }
        else if(list1[c1] < list2[c2])
        {
            if(list1[c1] < list3[c3])
                c1++;
            else
                c3++;
        }
        else if(list1[c1] > list2[c2])
        {
            if(list2[c2] < list3[c3])
                c2++;
            else
                c3++;
        }
    }
    if(c1 == n1)
        while(c2 < n2 && c3 < n3)
        {
            if(list2[c2] == list3[c3])
            {
                output.push_back(list2[c2]);
                counter++;
                c2++;   c3++;
            }
            else if(list2[c2] < list3[c3])
                c2++;
            else
                c3++;
        }
    else if(c2 == n2)
        while(c1 < n1 && c3 < n3)
        {
            if(list1[c1] == list3[c3])
            {
                output.push_back(list1[c1]);
                counter++;
                c1++;   c3++;
            }
            else if(list1[c1] < list3[c3])
                c1++;
            else
                c3++;
        }
    else
        while(c2 < n2 && c1 < n1)
        {
            if(list2[c2] == list1[c1])
            {
                output.push_back(list2[c2]);
                counter++;
                c2++;   c1++;
            }
            else if(list1[c1] < list2[c2])
                c1++;
            else
                c2++;
        }
    cout << counter << endl;
    for(int i = 0; i < output.size(); i++)
        cout << output[i] << endl;

    return 0;
}
