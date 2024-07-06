// nadim [ict,mbstu]
#include <bits/stdc++.h>
using namespace std;
#define tc int t;cin>>t;while(t--)
#define yy cout<<"YES\n";
#define nn cout<<"NO\n";
#define ll long long int
#define pb push_back
 
 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   ll n,q;
   cin>>n>>q;
   ll a[n];
   for(ll i=0;i<n;i++)
   {
     cin>>a[i];
   }
   sort(a,a+n);
   for(ll i=1;i<n;i++)
   {
     a[i]=a[i-1]+a[i];
   }
   a[-1]=0;//not needed we use condition
   while(q--)
   {
    ll m,q;
    cin>>m>>q;
    ll ans=0;
    if(n-m-1<0)
    {
        ans=a[(n-m-1)+q];
    }
    else
    ans=a[(n-m-1)+q]-a[n-m-1];
    cout<<ans<<endl;
   }
 
   return 0;
}
