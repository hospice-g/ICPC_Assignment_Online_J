#include <iostream>

using namespace std;

long   cycle_length(long nbr)
{
    long n = nbr, i = 1;

    while (i)
    {
        if (n == 1)
            break;

        if (n%2)
            n = n*3 + 1;
        else
            n /= 2;

        i ++;
    }

    return i;
}

long max_length(long i, long j)
{

    long max, tmp = i;
    
    if (i > j)
    {
        i = j;
        j = tmp;
    }
    
    max = cycle_length(i);
    for (long k = i+1; k < j+1; k++)
        max = max > cycle_length(k) ? max : cycle_length(k);

    return max;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0); 
    
    long i, j;

    while (cin >> i >> j)
        cout << i << " " << j << " " << max_length(i, j) << "\n";
    return 0;
}