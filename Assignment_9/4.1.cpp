#include<bits/stdc++.h>

using namespace std;

int main(){

    string chaine;
    while(cin>>chaine){
        int q,l,r;
        cin>>q;
        for(int i=0; i < q ; ++i){
            cin>>l>>r;
            map<char,int> m;
            for(int i = l-1; i<= r-1;++i){
                m[chaine[i]] += 1;
            }
            int max = INT_MIN;
            char carac;
            for(auto it = m.begin(); it != m.end(); ++it){
                if(it->second > max){
                    max = it->second;
                    carac = it->first;
                } 
                else if(it->second == max){
                    max = it->second;
                    carac = it->first;
                }
            }
            cout<<carac<<endl;
        }
    }
}