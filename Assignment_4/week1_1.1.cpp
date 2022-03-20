#include <iostream>
#include<map>
#include<fstream>
using namespace std;

long add_subtraction(long x , long y , long z)
{   
    long a = 0 , b  , i = 1;
    map<long, long> m;

    m[0]= a;

    if( x == 0 && y == 0 && z == 0) return 0 ;

    else if(x == y && y == z ) return 1 ;

    else if(x == y && z != y) return -1 ;

    else {

    while(a <= 2*z && a >= -2*z){

        if(i%2) 
        {                
            
            a = a + x ;
            m[i] = a ;
        
        }

        else
        {
            a = a - y;
            m[i] = a ;

        } 

        i++ ;

    }
      
     /* for(auto j : m)
      {
          cout<<j.second<<" ";
      }
      */

      for(auto j : m)
      {
            if(j.second == z )
            return j.first ;
      } 
   
return -1 ;

    }

}


int main()
{
    long a , b = 0 , c = 0 , d ;
     int i = 0;
 ifstream f("week1_1.1_input.txt");

 ofstream fi("week1_1.1_out.txt");

  if (!f.is_open() || !fi.is_open())
  {
        cout << "Impossible d'ouvrir le fichier en lecture !" << endl;
        return 0;
  }


  while(f >> a )
  {
      i++ ;

      b += a ;
      
      c =  b - a ;

      if(i == 2)
        {
            d = c ;
        }

        if(i == 3)
         {
           fi << add_subtraction(d, b - (d+a) , a)<<"\n" ;
           
           cout<<d<<" "<<b - d-a <<" "<< a<<" "<<endl ;
           d = 0 ;
           b = 0 ;
           i = 0 ;
         }

     
  }
return 0 ;

}