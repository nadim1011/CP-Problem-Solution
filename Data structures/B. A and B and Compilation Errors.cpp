// nadim [ict,mbstu]
#include <bits/stdc++.h>
using namespace std;
#define tc int t;cin>>t;while(t--)
#define ll long long int
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define take(x) int x;cin>>x;
#define all(v) v.begin(),v.end()
#define stp(x) setprecision(x)

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;
  int ans=0;
   
   
   for (int i = 0; i < n; ++i)
   {
      int x;cin>>x;
      ans^=x;
   }
   int ans2=ans;

   for (int i = 1; i < n; ++i)
   {
      int x;cin>>x;
      ans^=x;
   }
   cout<<ans<<'\n';
   ans2^=ans;

   for (int i = 2; i < n; ++i)
   {
      int x;cin>>x;
      ans2^=x;
   }
   cout<<ans2<<'\n';
   return 0;
}
