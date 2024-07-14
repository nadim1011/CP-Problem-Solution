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
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   sort(a,a+n);
   tc
   {
    int tk;
    cin>>tk;
    int l=0,r=n-1;
    int ans=0;
    while(l<=r)
    {
        int mid=(l+r+1)/2;
        if(tk>=a[mid])
        {
            ans=mid+1;
            l=mid+1;
        }
        else if(tk<a[mid])
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
   }
   
   return 0;
}
