#include <bits/stdc++.h>

using namespace std;

/*
     EXPLANATION:
     The operation can be treated as follows: we at first decrease salary of some worker by 1 and then increase salaries of all workers by 1.
     But why do we need to do the second part? Since we want all salaries to be equal the second part of the operation could be simply ignored.
     So we may assume that at each operation we decrease salary of some worker by 1.Now if we have some salary greater the minimum salary
     then without applying operation to it we can't achieve the goal in any way - the minimum could only decreases during operations so this 
     salary will be always not equal to the minimum one. Hence we need to apply at least W[i] − minW operations for the i-th worker. 
     The summation of this over all i is exactly sumW − N * minW. But, clearly, applying exactly W[i] − minW operations to the i-th worker 
     (for all i) makes all salaries to be equal to minW, which is our goal. Therefore, this number of operations is also sufficient. 
     ALTERNATIVE SOLUTION:
     The constraints were quite moderate. So alternatively one could model the process of applying all the operations.
     But the following naive implementation will get TLE: at each step we at first check whether all salaries are equal,
     if no, then choose the worker with the maximal salary and increase by 1 salaries of all other works. Such solution has
     complexity O(maxW * N * N) in the worst case that have the form W[1] = 0, W[2] = maxW, W[3] = maxW, ..., W[N] = maxW, 
     where maxW = 10000. Since we also have like 100 tests in a file, such solution could consume more than 8 seconds on one test file. 
     And we indeed have test files having all 100 tests of this or similar form.

     In order to get AC with modeling one should at least figure it out the first step of the solution explained above: 
     instead of increasing salaries of N − 1 workers one should decrease salary of just one worker at each operation. But even this
     will get TLE if it would be implemented as above. The simplest way to make such solution fast enough is to decrease by one all
     maximum salaries at one step (so we perform several operations at once). Then the solution will have complexity O(maxW * N) and 
     passes the TL easily. Namely now at each step we at first check whether all salaries are equal and if no we find the maximal 
     salary and then decrease by 1 all salaries equal to this maximum.
*/

int main()
{
     int t;
     cin >> t;
     while(t--)
     {
          int n;
          cin >> n;
          int w[n], sum = 0, counter = 0;
          for(int i = 0; i < n; i++)
          {
               cin >> w[i];
               if(w[i] == w[0])
                    counter++;
               sum += w[i];
          }
          
          int min = *min_element(w, w+n);
          cout << sum - n*min << endl;
     }
     return 0;
}
