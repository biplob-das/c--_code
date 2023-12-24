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
        int one=0,zero=0;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
            }else{
                zero++;
            }
        }

        if(one==n){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}