#include<bits\stdc++.h>
using namespace std;
int main()
{
   
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        
        int min_index = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[min_index]) {
                min_index = i;
            }
        }
        
       
        a[min_index]++;
        
        long long product = 1;
        for (int i = 0; i < n; i++) {
            product *= a[i];
        }
        
        cout << product << endl;
    }
    
    return 0;
}



