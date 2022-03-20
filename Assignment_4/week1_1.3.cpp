#include <iostream>
#include<fstream>


using namespace std;

int nombredecimal(string x)
{
    int i = 0 ;
    
     for (int j = 0; j < x.length(); j++)
     {
         if(x[i]=='9') i++;
  
     }
     
     if(i == x.length()) return x.length() + 1;

     else  return x.length() ;

}   

int main()
{
  string x ;

  ifstream f("week1_1.3_input.txt");

 ofstream fi("week1_1.3_output.txt");

  if (!f.is_open() || !fi.is_open())
  {
        cout << "Impossible d'ouvrir le fichier en lecture !" << endl;
        return 0;
  }


  while(f >> x)
  {
     fi << nombredecimal(x) <<endl; 
  }


  

}