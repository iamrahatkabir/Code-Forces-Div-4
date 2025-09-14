#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, n;
        cin >> x >> n;
        
        int arr[n];
        
        arr[0] = x;
        // cout << x << endl;

        for(int i = 0; i < n-1; i++)
        {
            if(arr[i] < 0)
                arr[i+1] = x;
            else
                arr[i+1] = -abs(x);
        }

        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            
        }
        cout << sum << endl;

    }
    return 0;
}
