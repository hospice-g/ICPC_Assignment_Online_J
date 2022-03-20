#include <iostream>

using namespace std;

int main()
{

    int x , y ;
  
  while (cin >> x >>y)
  {
      double r ;

      r = double(x) / y ;
      
      if(x%y == 0) cout<<r<<endl;
      /*
      else if( r < 0 && r > -1) 
      {
        int c = r ;
        cout<< c <<endl;
      }
*/
      else 
      {
          int c = r ;
          if(r >= 0) 
          {         
          c++;
          cout<< c <<endl;
          }

          else 
          {
          
          cout<< c <<endl;
         }
      }

     
  }
  

    


}