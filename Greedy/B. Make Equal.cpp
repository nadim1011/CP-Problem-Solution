// nadim [ict,mbstu]
#include <bits/stdc++.h>
using namespace std;
#define tc int t;cin>>t;while(t--)
#define yy cout<<"YES\n";
#define nn cout<<"NO\n";
#define ll long long int
#define pb push_back

int main() {
   tc
   {
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll x=sum/n;
    bool f=1;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            a[i+1]=a[i+1]+(a[i]-x);
            a[i]=x;
        }

        if(a[i]<x)
        {
            nn
            f=0;
            break;

        }
    }
    if(f)
    yy

   }
   
   return 0;
}
