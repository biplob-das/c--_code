#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z,d,p;
    cin>>t;
    
    while(t--)
    {
      cin>>x>>y>>z;
      float p=float(x)*float(y);
      float(d)=(float(z)/p);
      if(d>0.5)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }

return 0;

    }