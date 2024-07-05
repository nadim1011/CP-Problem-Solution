// nadim [ict,mbstu]
#include <bits/stdc++.h>
using namespace std;
#define tc int t;cin>>t;while(t--)
#define yy cout<<"YES\n";
#define nn cout<<"NO\n";
#define ll long long int
#define pb push_back

int main() {
   ll n;
   scanf("%lld",&n);
   ll a[n+1];
   
   for(ll i=0;i<n;i++)
   {
     scanf("%lld",&a[i]);
   }
   
   ll l=0, r=n-1, sum1=0, sum2=0, ans=0;
   while(l<=r)
   {
    if(sum1<sum2)
    {
      sum1+=a[l];
      l++;
    }
    else
    {
      sum2+=a[r];
      r--;
    }
    if(sum1==sum2)
    {
        ans=sum1;
    }

   }
   
   cout<<ans<<endl;
   return 0;
}
