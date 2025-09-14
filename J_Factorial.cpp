#include<bits/stdc++.h>
using namespace std;

long long int facto(long long int n, int m, int i)
{
    if(i == m)
        return n;

    long long int result = facto(n*i, m, i+1);
    return result;
}

int main()
{
    int n;
    cin >> n;
    
    if(n == 0)
        cout << 1 << endl;
    else
    {
        long long int result = facto(n, n, 1);
        cout << result << endl;
    }


    return 0;
}
