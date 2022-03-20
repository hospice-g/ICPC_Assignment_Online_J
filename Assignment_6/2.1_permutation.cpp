#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum(int ** mat, vector<int> &tab)
{
    int s = 0, n = tab.size();

    for (int i = 0; i < n-1; i++)
    {
        int pi = tab[i] - 1;
        int pi_1 = tab[i+1] - 1;
        s += mat[pi][pi_1];
    }

    return s;
}

void min_coast(int ** mat, int n)
{
    vector<int> per(n), min_per(n);
    int min = INT32_MAX, p = 0;

    for (int i = 0; i < n; i++)
        per[i] = i+1;

    do
    {
        p = sum(mat, per);
        
        if (min > p)
        {
            min = p;
            min_per = {per};
        }

    } while (next_permutation(per.begin(), per.end()));

    for (auto el: min_per)
        cout << el << " ";

    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    
    int n;

    while(cin >> n)
    {
        int el;
        int ** mat = new int *[n];
        for (int i = 0 ; i < n ; i++)
        {
            mat[i] = new int[n];

            for (int j = 0; j < n; j++)
            {
                cin >> el;
                mat[i][j] = el;
            }
        }

        min_coast(mat, n);

        for (int i = 0; i < n ; i++)
            delete [] mat[i];

        delete [] mat;
    }
}