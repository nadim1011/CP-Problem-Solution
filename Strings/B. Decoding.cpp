// nadim [ict,mbstu]
#include <bits/stdc++.h>
using namespace std;
#define tc int t;cin>>t;while(t--)
#define yy cout<<"YES\n";
#define nn cout<<"NO\n";
#define ll long long int
#define pb push_back

int main() {
   int n;
   string s;
   cin>>n;
   cin>>s;

   for(int i=n-2;i>=0;i-=2)
   {
    cout<<s[i];

   }

   if((n&1)==1)
   {
    for(int i=0;i<n;i+=2)
   {
    cout<<s[i];
   }
   }

   else
   {
    for(int i=1;i<n;i+=2)
   {
    cout<<s[i];
   }
   }
   


   
   return 0;
}
