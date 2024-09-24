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
   tc
   {
      int n,k;
      cin>>n>>k;
      
         if((n&1)==0)
      {
         if((k&1)==0 && k<=floor(sqrt(n)))
         {
           cout<<"YES\n";
         }
         else
            cout<<"NO\n";

      }
      else
      {
         if((k&1)==1 && k<=floor(sqrt(n)))
         {
           cout<<"YES\n";
         }
         else
            cout<<"NO\n";

      }
      }
      
   
   
   return 0;
}
