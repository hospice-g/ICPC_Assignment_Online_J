#include<iostream>

using namespace std ;

int main(){

string s ;
int n = 0;

while(1){

    getline(cin,s) ;

    if(s.empty()) break ;
    int signe = 1;
    int tmp = 0 ;
    for (auto c : s)
    {   
        tmp +=  atoi(&c) ;
        if(c == '+') 
        {
        tmp -= atoi(&c) ;
        //n += tmp ;
        tmp = 0 ;
        signe = 1 ;

        }

        else if(c == '-') 
        {
        tmp -= atoi(&c) ;    
       // n -= tmp ;
        tmp = 0 ;
        signe = -1 ;
        }

        else if(signe == 1)
        {
          n += atoi(&c) ;
          signe = 0 ;
        }

        else if(signe == -1)
        {
           n -= atoi(&c) ;  
           signe = 0 ;
        }
        

    }
   
   cout<<n<<endl; 
   n = 0 ;
}



}