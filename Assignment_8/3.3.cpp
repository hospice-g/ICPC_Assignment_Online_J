#include <iostream>
#include <iomanip>

using namespace std;

void fonction(int n)
{

    double s = 0 , tab[n] ;
        
    for (int i = 0; i < n; i++) cin >> tab[i] ;
    
    for (int i = 0; i < n; i++)
    {
        s += tab[i] + 1/tab[i];
    }
    
    cout<<fixed<<setprecision(10)<<s<<endl ;
}

int main()
{
    int n ;
 
     while (cin >> n)
    {
        fonction(n) ;
    }

}