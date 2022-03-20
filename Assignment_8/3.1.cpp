#include <iostream>

using namespace std;

void fonction( int n )
{
    double A[n], B[n] , a = 0 , b = 0;

    for (int i = 0; i < n; i++)
    {
        cin >>A[i] ;
    }

    for (int i = 0; i < n; i++)
    {
        cin >>B[i] ;
    }
    
   

for (int i = 0; i < n; i++)
{
    a += 1000*A[i]  ;
    b += 1000*B[i]  ;

}


if(a == b) cout<<"Sum(A)=sum(B)"<<endl;

else if(a > b) cout<<"Sum(A)>sum(B)"<<endl;

else  cout<<"Sum(A)<sum(B)"<<endl;


}

int main()
{
 int n ;

 while (cin >> n)
 {
     fonction(n);

 }
 


}