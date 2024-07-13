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
    if(n<=28)
    {
        char c='a'+(n-3);
        cout<<"aa"<<c<<endl;
    }
    else if(n<=53)
    {
        char c='a'+(n-28);
        cout<<"a"<<c<<'z'<<endl;
    }
    else if(n<=78)
    {
        char c='a'+(n-53);
        cout<<c<<"zz"<<endl;
    }
   }
   
   return 0;
}
