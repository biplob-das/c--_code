#include<bits\stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        if(sum>=n) cout<<sum-n<<"\n";
        else cout<<1<<"\n";
    }
    return 0;
}