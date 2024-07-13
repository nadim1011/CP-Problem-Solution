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
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll ans=f;
    ar[-1]=0;
    
    for(ll i=0;i<n;i++)
    {
        
             ans-=min(((ar[i]-ar[i-1])*a),b);
        

    }
    
    
    if(ans<=0)
        nn
    else
        yy
   ans=0;
   }
   
   return 0;
}
