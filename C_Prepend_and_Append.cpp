#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
   string num;

    cin>>num;

    int count = 0 ;

    for(int i = 0 ; i < n/2 ; i ++){

        if((num[i] == '0' && num[n-1-i] == '1') || (num[i] == '1' && num[n-1-i] == '0')){
            count++;
        }
        else{
            break;
        }

    }

    cout<<n-(count*2)<<endl;
}
}
