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
    int n;
    cin>>n;
    int ans;
    if((n&1)==1)
    {
        ans=(n+1)/2;
    }
    else
    {
        ans=n/2;
    }
    cout<<ans<<endl;
    int c=ans;
    int a=1,b=n*3;
    while(c--)
    {
        
    cout<<a<<" "<<b<<endl;
    a+=3;
    b-=3;
    }
    
   }
   
   return 0;
}
