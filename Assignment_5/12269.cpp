#include <iostream>
#include <set>

using namespace std;
#define FIELD_LENGTH 75.0 
#define FIELD_WIDTH 100.0
bool areAllMowed(set<double> positoins, double totalSpace, double mowerSpace)
{
	auto start = positoins.begin();
	auto end = positoins.rbegin();
	double previousPosition = *start;
	if (*start > totalSpace / 2 || totalSpace - *end > mowerSpace / 2)
		return false;
	start++;
	for (auto it = start; it != positoins.end(); it++)
	{
		if (*it - previousPosition > mowerSpace)
			return false;
		previousPosition = *it;
	}
	return true;
}
int main()
{
	int x_count, y_count;
	double mower_width;
	while (cin >> x_count >> y_count >> mower_width && x_count != 0)
	{
		set<double> xs, ys;
		double start_postion, x = 0, y = 0;
		for (int i = 0; i < x_count; i++)
		{
			cin >> x;
			xs.insert(x);
		}
		for (int i = 0; i < y_count; i++)
		{
			cin >> y;
			ys.insert(y);
		}
		if (FIELD_LENGTH <= mower_width * xs.size() && FIELD_WIDTH <= mower_width * ys.size() &&
			areAllMowed(xs, FIELD_LENGTH, mower_width) && areAllMowed(ys, FIELD_WIDTH , mower_width))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}