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
    string s;
    cin>>s;
    int l=s.size();
    if(s=="()")
    {
        nn
    }
    else
    {
    yy
    string s1="";
    string t1(l,'(');
    string t2(l,')');
    string s2=t1+t2;
    
    for(int i=0;i<s.size();i++)
    {
        
        s1+="()";
    }
    if(s2.find(s)==string::npos)
    cout<<s2<<endl;
    else 
    cout<<s1<<endl;

    }
    
   }
   
   return 0;
}
