#include <bits\stdc++.h>
using namespace std;
int main()
{
    
     int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if(n==2){
            if(s[0]!=s[1]) cout<<"YES\n";
            else cout<<"NO\n";
            continue;
        }
        if(n>2) cout<<"NO\n";
        else cout<<"YES\n";
 
    }
    return 0;
}