#include <iostream>
#include <vector>

using namespace std;

int sum_min(vector<int> &tab)
{
    int n = tab.size(), min = 0;
    for (int i = 0; i < n; i++)
    {
        min += tab[i];
        int j = i + 1;
        while (j < n)
        {
            int min_tmp = tab[i];
            for (int k = i; k <= j; k++)
            {
                if (min_tmp > tab[k])
                    min_tmp = tab[k];

            }
            min += min_tmp;
            j++;
        }
    }

    return min;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    
    int size, tmp;

    while(cin >> size)
    {
        vector<int> tab;
        for (int i = 0; i < size; i++)
        {
            cin >> tmp;
            tab.push_back(tmp);
        }

        cout << sum_min(tab) << "\n";
    }
}