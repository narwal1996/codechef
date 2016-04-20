//
#include<iostream>

using namespace std;

int main()
{
    int t;
    /*
    speed difference is largely due to the iostream I/O functions maintaining synchronization with the C I/O functions.
    We can turn this off with a call to std::ios::sync_with_stdio(false);

    Performance of cin/cout can be slow because they need to keep themselves in sync with the underlying C library.
    This is essential if both C IO and C++ IO is going to be used.
    However, if you only going to use C++ IO, then simply use the below line before any IO ops
    std::ios::sync_with_stdio(false);
    */
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--)
    {
        int n, counter = 1;  // bcoz first car will always run at its max speed.
        cin >> n;
        int temp, minimum;
        cin >> minimum;
        for(int i = 1; i < n; i++)
        {
            cin >> temp;
            if(temp < minimum)
            {
                minimum = temp,
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
