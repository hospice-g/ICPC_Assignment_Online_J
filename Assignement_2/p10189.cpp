#include <iostream>
#include <vector>
using namespace std;

#define inbound(x, y, n, m) (x > -1 && x < n && y > -1 && y < m)
void increment(vector<vector<int>> &map, int x, int y, int n, int m)
{
	for (int contour_i = -1; contour_i < 2; contour_i++)
		for (int contour_j = -1; contour_j < 2; contour_j++)
			if ((contour_j || contour_i) && inbound(x + contour_i, y + contour_j, n, m) && map[x + contour_i][y + contour_j] != -1)
				map[x + contour_i][y + contour_j]++;
}

int main()
{
	int n, m, field = 1;
	while (cin >> n >> m && n != 0 && m != 0)
	{
		vector<vector<int>> map(n, vector<int>(m, 0));
		for (int i = 0; i < n; i++)
		{
			string line;
			cin >> line;
			for (int j = 0; j < m; j++)
			{
				if (line[j] == '*')
				{
					map[i][j] = -1;
					increment(map, i, j, n, m);
				}
			}
		}
		if(field > 1) cout << "\n";
		cout << "Field #" << field << ":\n";
		for (int i = 0; i < n; i++, cout << "\n")
			for (int j = 0; j < m; j++)
				map[i][j] == -1 ? cout << "*"
								: cout << map[i][j];
		field++;
	}
}