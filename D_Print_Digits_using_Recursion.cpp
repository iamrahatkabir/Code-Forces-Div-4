#include<bits/stdc++.h>
using namespace std;


void spac(int n)
{
    if(n == 0)
        return;
    spac(n/10);
    cout << n%10 << " ";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        if(n == 0)
            cout << 0;
        else
            spac(n);
        cout << endl;
        
    }

    return 0;
}
