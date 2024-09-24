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
      int n;
      cin>>n;
      ll sum=0;
      std::vector<int> v(n);
      for (int i = 0; i < n; ++i)
      {
         take(x)
         v[i]=x;
         sum+=x;
      }
      
      sort(all(v));
      if(n<=2)
      {
         cout<<-1<<'\n';
      }
      else 
      {
         ll dx=n/2;
         
            ll aa=(1LL*v[dx]*n*2-sum+1);
            cout<<max(aa,0ll)<<'\n';
         
      }
      

      
   }
   
   return 0;
}
