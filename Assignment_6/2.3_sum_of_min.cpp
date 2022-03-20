#include<bits/stdc++.h>

using namespace std;

typedef pair<long long,long long> pint;
int main(){

    long long n;
    while(cin>>n)
    {
        long long arr[n+1];
        for(long long i=1;i<=n;i++)cin>>arr[i];
        long long sum=0;
        for(long long i=1;i<=n;i++)
        {
            long long temp=arr[i];
            for(long long j=i;j<=n;j++)
            {
                temp=min(temp,arr[j]);
                sum+=temp;
            }
        }
        cout<<sum<<'\n';
    }
}
