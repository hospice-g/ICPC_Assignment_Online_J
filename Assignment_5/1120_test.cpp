#include <iostream>
#include<vector>
using namespace std;


string No_change(unsigned int n, int i ,  vector<unsigned int> v)
{    
   string yes = "Yes", no = "No";

     int j = 1 ;
      unsigned int d = 0 ;
      unsigned int s = 0 ;

    d += v[0] ;

    while (j != i)
    {
       d += v[j] ;
       if(n%d== 0) return yes ;
       
       else d -= v[i] ;

        j++ ;
    }


    
    return no ;

}



int main()
{
 unsigned int n , val;
 string s ;



 while(cin >> n >> s && n >= 1  && s == "\n")
{ 
     unsigned int l[5] ;

    for (int i = 0; i < 5; i++)
    {   
        cin >> val ;
        l[i] = val;
    }
    
    if(l[0]> n) cout<<"No"<<endl<<endl;

   // else if()

}