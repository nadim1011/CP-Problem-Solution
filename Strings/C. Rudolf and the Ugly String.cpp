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
   string s;
   cin>>s;
   int c=0;
   for(int i=0;i<=n-3;i++)
   {
    int f=0;
    if(s.substr(i,3)=="map")
    {
        c++;
        
        i+=3;
        f=1;
    }
    if(s.substr(i,3)=="pie")
    {
        c++;
        i+=2;
        
    }
    if(f==1)
    {
        i--;
    }
 
   }
   cout<<c<<endl;
    }
   
   
   return 0;
}
