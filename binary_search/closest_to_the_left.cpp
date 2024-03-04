#include <bits/stdc++.h>
     
using namespace std;
     
int main()
{
    int n, k;
    cin>>n>>k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    while (k--)
    {
        int x;
        cin>>x;

        int l(-1), r(n);      //a[l] <= x
        while( l+1 < r)
        {
        int mid = (l+r)/2;

        if(arr[mid] <= x)
        {
            l = mid;
        }

        else if (arr[mid] > x)
        {
            r = mid;
        }           
        }

     cout<< l+1 <<endl;

    }


    
    
        
}