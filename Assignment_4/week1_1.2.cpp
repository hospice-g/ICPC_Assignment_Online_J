#include <iostream>
#include<vector>
#include<fstream>


using namespace std;

vector<long> returntab_withoutMax( vector<long> l)
{
     int j = 0 , index =0 ;
        long max = 0 ;
         vector<long> li ;

    for (auto i : l)
        if(i > max) max = i ;
            

          for (auto i : l)
            if(i == max) j++;
            
       if( j == 1) 
        {
          for (auto i : l)
            {  
            if(i == max ) ;

            else li.push_back(i)  ;
             }
        }

        

        else 
        {
          for (auto i : l)
            {  
            if(i == max && ++index == 3) ;
            
            else  li.push_back(i) ;
            }
        }

return li ;


}


int main()
{        
    
     long val ;
     int i,n;
     while(cin>>n){
        vector<long> l , li;
       for ( i = 0; i < n; i++) 
       {
         cin >> val ;
        l.push_back(val) ;
       }
       li = returntab_withoutMax(l);
       if(li.size() == 0)
          cout<<endl; 
       else
       {
       for (auto j : li)
        cout<<j<<" " ;
        cout<<endl;
       }
     
     }    

}