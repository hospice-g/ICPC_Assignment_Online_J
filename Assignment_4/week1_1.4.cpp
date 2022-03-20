#include <iostream>
#include<fstream>
#include<map>
#include<list>



using namespace std;

int main()
{
    map<char ,int> s1 = { {'C',1}, {'D', 2}, {'H',3}, {'S',4}} , s2 = {{'2',1},{'3',2},{'4',3},{'5',4},{'6',5},{'7',6},{'8',7},{'9',8},{'T',9},{'J',10},{'Q',11},{'K',12},{'A',13}};
int i = 0 , j = 0 ;
  string s[5] ;

  while(cin >> s[i])
  {
       i++ ;
    if (i == 5)
    {
      char tab[5] , tabb[5];

      for (int i = 0; i < 5; i++)
      {
          tab[i] = s[i][0];
          tabb[i] = s[i][1] ;
          
      }

      
      
      if(s1.find(tabb[0])->first == tabb[0] )
      {   

          if(s2.find(tab[0])->second <= s2.find(tab[4])->second)
          {
          for (int i = 1; i < 5; i++)
          {
           if( tabb[i] != tabb[0] /*|| s2.find(tab[i-1])->second > s2.find(tab[i])->second*/) 
           {
               cout<<" No "<<endl;
               break ;
            }
            else j++ ;
          }
            if(j == 4) {cout<<"YES "<<endl; j = 0 ;}
             
          } 

          else
          {
              for (int i = 1; i < 5; i++)
              {
                if(tabb[i] != tabb[0] /*|| s2.find(tab[i-1])->second < s2.find(tab[i])->second*/) 
                  {
                   cout<<" No "<<endl;
                   break ;
                 }

                 else j++ ;
              }
                 if( j == 4){  cout<<" YES"<<endl; j= 0 ;}
            
          }

           

      }
    
      else cout<<" No "<<endl;

      i = 0 ;
       }

  }
  

}