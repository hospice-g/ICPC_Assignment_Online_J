#include<bits/stdc++.h>

using namespace std;

int main(void)
{
  int r, c,MAXI;

  while(cin >>r >>c)
    {
      if(r == 1 && c != 1)
	MAXI = (r*c) - (c/2);
      else if(r != 1 && c == 1)
	MAXI = (r*c) - (r/2);
      else if(r == 1 && c == 1)
	MAXI = 0;
      else
	MAXI = (r*c) - (r/2)*(c/2);
  
      cout <<MAXI <<endl;
    }
  return 0;
}