#include<bits/stdc++.h>

using namespace std;

int main(void)
{
  int n;
  while(cin >>n)
    {
      int id1, id2;
      long long x;
      map<long long, int> m;
      map<long long, int> :: iterator it1;
      map<long long, int> :: reverse_iterator it2;
      
      for(int i = 0; i < n; i++)
	{
	  cin >>x;
	  m.insert(make_pair(x, i));

	  it1 = m.begin();
	  it2 = m.rbegin();
	  id1 = (*it1).second + 1;
	  id2 = (*it2).second + 1;

	  if(id1 <= id2)
	    cout <<id1 <<" " <<id2 <<"\n";
	  else
	    cout <<id2 <<" " <<id1 <<"\n";
	}
    }
  return 0;
}

