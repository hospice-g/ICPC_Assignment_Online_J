#include<iostream>
#include <sstream>
#include<list>
using namespace std;


int main(int argc, char const *argv[])
{
    int p,c,c_actuel=0,i,k;
    string l ,x;
    list <int> liste;

    while(1){
        
        cin>>p>>c;
        

        
        if (p==0 && c==0)
            break;
        
        c_actuel++;
        cout<<"Case "<<c_actuel<<":\n";
        while (!liste.empty())
        {
          liste.pop_front();
        }
        
        for ( i = 1; i <=p && i<= 1000 ; i++)
        {
            
            liste.insert(liste.end(),i);
            //cout<<i;
        }
       

        for ( i = 0; i < c; i++)
        {
            cin>>l;
            
            if (l=="N")
            {
                //cout<<l<<"\n";
                cout<<liste.front()<<"\n";
                
                
                liste.insert(liste.end(),liste.front());
                liste.erase(liste.begin());
                //  for (auto it = liste.begin(); it!= liste.end(); it++)
                //                 {
                //                     cout<<" "<<*it<<" ";
                //                 }
                //                 cout<<endl;
                
            }
            else if (l=="E")
            {

                cin>>x;
                //cout<<l<<" "<<x<<"\n";
                stringstream trs(x);
                trs>>k;
                for (auto it = liste.begin(); it!= liste.end(); it++)
                {
                    if ((*it)==k){
                        liste.erase(it);
                        break;
                    }
                    
                    
                }
                liste.insert(liste.begin(),k);
            }
        
        }
    
    }
return 0;

}
