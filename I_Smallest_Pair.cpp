#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i = 0; i<T; i++)
    {
        int n; cin>>n;
        int a[n];
        for(int i = 0; i<n ; i++)
        {
            cin>>a[i];
        }
        int min_sum = INT_MAX;
        for(int i = 0; i<n ; i++)
        {
            for( int j = i+1 ; j<n ; j++)
            {
                int Ekhon_Sum = a[i] + a[j] + j-i; 
                 min_sum  = min(min_sum , Ekhon_Sum);                           
            }
        }
      cout <<min_sum<<endl;   
  
    } 
  









    return 0;
}